//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program.  If not, see http://www.gnu.org/licenses/.
//


//TODO split it to more files

#ifndef __INETVEINS_SERIALIZERBASE_H_
#define __INETVEINS_SERIALIZERBASE_H_

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/common/RawPacket.h"
#include "inetveins/common/serializer/Buffer.h"
#include "inetveins/linklayer/common/MACAddress.h"
#include "inetveins/networklayer/contract/ipv4/IPv4Address.h"
#include "inetveins/networklayer/contract/ipv6/IPv6Address.h"


namespace inetveins {

namespace serializer {

enum ProtocolGroup {
    UNKNOWN = -1,       // lookup serializer by classname only
    GLOBAL = 1,
    IP_PROT,
    ETHERTYPE,
    LINKTYPE
};

enum {  // from libpcap
    LINKTYPE_ETHERNET = 1,
    LINKTYPE_IEEE802_11 = 105
};

/**
 * class for data transfer from any serializers to subserializers
 * e.g. store IP addresses in IP serializers for TCP serializer
 */
class INETVEINS_API Context
{
  public:
    const void *l3AddressesPtr = nullptr;
    unsigned int l3AddressesLength = 0;
    bool throwOnSerializerNotFound = true;
    bool errorOccured = false;
};

/**
 * Converts between cPacket and binary (network byte order) packet.
 */
class INETVEINS_API SerializerBase : public cOwnedObject
{
  protected:
    /**
     * Serializes a cPacket for transmission on the wire.
     * Returns the length of data written into buffer.
     */
    virtual void serialize(const cPacket *pkt, Buffer &b, Context& context) = 0;

    /**
     * Puts a packet sniffed from the wire into an EtherFrame.
     */
    virtual cPacket *deserialize(const Buffer &b, Context& context) = 0;

  public:
    SerializerBase(const char *name = nullptr) : cOwnedObject(name) {}

    static SerializerBase & lookupSerializer(const cPacket *pkt, Context& context, ProtocolGroup group, int id);
    static void lookupAndSerialize(const cPacket *pkt, Buffer &b, Context& context, ProtocolGroup group, int id, unsigned int maxLength = (unsigned int)(-1));
    void serializePacket(const cPacket *pkt, Buffer &b, Context& context);

    static SerializerBase & lookupDeserializer(Context& context, ProtocolGroup group, int id);
    static cPacket *lookupAndDeserialize(const Buffer &b, Context& context, ProtocolGroup group, int id, unsigned int maxLength = (unsigned int)(-1));
    cPacket *deserializePacket(const Buffer &b, Context& context);
};

class INETVEINS_API DefaultSerializer : public SerializerBase
{
  public:
    virtual void serialize(const cPacket *pkt, Buffer &b, Context& context) override;
    virtual cPacket *deserialize(const Buffer &b, Context& context) override;
};

class INETVEINS_API ByteArraySerializer : public SerializerBase
{
  public:
    virtual void serialize(const cPacket *pkt, Buffer &b, Context& context) override;
    virtual cPacket *deserialize(const Buffer &b, Context& context) override;
};

class INETVEINS_API SerializerRegistrationList : public cNamedObject, noncopyable
{
    public:
      static DefaultSerializer defaultSerializer;
      static ByteArraySerializer byteArraySerializer;

    protected:
        typedef std::pair<int, int> Key;
        typedef std::map<Key, SerializerBase*> KeyToSerializerMap;
        typedef std::map<std::string, SerializerBase*> StringToSerializerMap;
        KeyToSerializerMap keyToSerializerMap;
        StringToSerializerMap stringToSerializerMap;

    public:
        SerializerRegistrationList(const char *name) : cNamedObject(name, false) {}
        virtual ~SerializerRegistrationList();

        virtual void clear();

        /**
         * Adds an object to the container.
         */
        virtual void add(const char *name, int protocolGroup, int protocolId, SerializerBase *obj);

        /**
         * Returns the object with exactly the given group ID and protocol ID.
         * Returns NULL if not found.
         */
        virtual SerializerBase *lookup(int protocolGroup, int protocolId) const;

        /**
         * Returns the object with exactly the given name.
         * Returns NULL if not found.
         */
        virtual SerializerBase *lookup(const char *name) const;
};

INETVEINS_API extern SerializerRegistrationList serializers; ///< List of packet serializers (SerializerBase)

#define Register_Serializer(SERIALIZABLECLASSNAME, PROTOCOLGROUP, PROTOCOLID, SERIALIZERCLASSNAME)   \
        EXECUTE_ON_STARTUP(inetveins::serializer::serializers.add(opp_typename(typeid(SERIALIZABLECLASSNAME)), \
                PROTOCOLGROUP, PROTOCOLID, new SERIALIZERCLASSNAME(#SERIALIZABLECLASSNAME)););

} // namespace serializer

} // namespace inetveins

#endif  // __INETVEINS_SERIALIZERBASE_H_

