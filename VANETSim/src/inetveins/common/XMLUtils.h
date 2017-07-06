#ifndef __INETVEINS_XMLUTILS_H
#define __INETVEINS_XMLUTILS_H

#include "inetveins/common/INETVEINSDefs.h"

#include "inetveins/networklayer/contract/ipv4/IPv4Address.h"

namespace inetveins {

namespace xmlutils {

INETVEINS_API const cXMLElement *getUniqueChild(const cXMLElement *node, const char *name);
INETVEINS_API const cXMLElement *getUniqueChildIfExists(const cXMLElement *node, const char *name);

INETVEINS_API void checkTags(const cXMLElement *node, const char *allowed);

INETVEINS_API bool getParameterBoolValue(const cXMLElement *ptr, const char *name, bool def);
INETVEINS_API bool getParameterBoolValue(const cXMLElement *ptr, const char *name);
INETVEINS_API int getParameterIntValue(const cXMLElement *ptr, const char *name);
INETVEINS_API int getParameterIntValue(const cXMLElement *ptr, const char *name, int def);
INETVEINS_API const char *getParameterStrValue(const cXMLElement *ptr, const char *name);
INETVEINS_API const char *getParameterStrValue(const cXMLElement *ptr, const char *name, const char *def);
INETVEINS_API IPv4Address getParameterIPAddressValue(const cXMLElement *ptr, const char *name);
INETVEINS_API IPv4Address getParameterIPAddressValue(const cXMLElement *ptr, const char *name, IPv4Address def);
INETVEINS_API double getParameterDoubleValue(const cXMLElement *ptr, const char *name);
INETVEINS_API double getParameterDoubleValue(const cXMLElement *ptr, const char *name, double def);

INETVEINS_API const char *getRequiredAttribute(const cXMLElement& node, const char *attr);
INETVEINS_API bool getAttributeBoolValue(const cXMLElement *node, const char *attrName, bool defVal);
INETVEINS_API bool getAttributeBoolValue(const cXMLElement *node, const char *attrName);

INETVEINS_API bool parseBool(const char *text);

} // namespace xmlutils

} // namespace inetveins

#endif // ifndef __INETVEINS_XMLUTILS_H

