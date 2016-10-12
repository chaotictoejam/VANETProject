//
// Copyright (C) 2010 Helene Lageber
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with this program; if not, see <http://www.gnu.org/licenses/>.
//

#ifndef __INETVEINS_MESSAGECHECKER_H
#define __INETVEINS_MESSAGECHECKER_H

#include "inetveins/common/INETVEINSDefs.h"

namespace inetveins {

#define BUFSIZE    4096

class INETVEINS_API MessageChecker : public cSimpleModule
{
  public:
    MessageChecker();

  protected:
    void initialize() override;
    void handleMessage(cMessage *msg) override;
    void checkMessage(cMessage *msg);
    void forwardMessage(cMessage *msg);
    void finish() override;

    void checkFields(void *object, cClassDescriptor *descriptor, const cXMLElementList& msgPattern) const;

    void checkFieldValue(void *object, cClassDescriptor *descriptor, int field, cXMLAttributeMap& attr, int i = 0) const;
    void checkFieldObject(void *object, cClassDescriptor *descriptor, int field, cXMLAttributeMap& attr, const cXMLElement& pattern, int i = 0) const;
    int checkFieldArray(void *object, cClassDescriptor *descriptor, int field, cXMLAttributeMap& attr) const;
    void checkFieldValueInArray(void *object, cClassDescriptor *descriptor, int field, cXMLAttributeMap& attr) const;
    void checkFieldObjectInArray(void *object, cClassDescriptor *descriptor, int field, cXMLAttributeMap& attr, const cXMLElement& pattern) const;

    void checkFieldType(void *object, cClassDescriptor *descriptor, int field, cXMLAttributeMap& attrList, int i = 0) const;
    int findFieldIndex(void *object, cClassDescriptor *descriptor, const std::string& fieldName) const;

    cXMLElementList m_checkingInfo;    /// List of checking information
    cXMLElementList::iterator m_iterChk;    /// Interator of the list of chacking information
    unsigned forwardedMsg;    /// Number of received and forwarded messages
    unsigned checkedMsg;    /// Number of checked messages
};

} // namespace inetveins

#endif // ifndef __INETVEINS_MESSAGECHECKER_H

