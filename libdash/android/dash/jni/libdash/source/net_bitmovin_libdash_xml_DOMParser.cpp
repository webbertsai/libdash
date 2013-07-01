#include "net_bitmovin_libdash_metrics_HTTPTransaction.h"

#include "xml/DOMParser.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::xml::DOMParser
#endif

#include "jni_helper.hpp"


jlong Java_net_bitmovin_libdash_xml_DOMParser_initialiseCppClass(JNIEnv *env, jobject obj, jstring str)
{
    const std::string& arg0(jni_helper::convertJStringToStdString(env, str));
    return jni_helper::convertPtrToJLong(new LOCAL_CLASS(arg0));
}

CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_xml_DOMParser_)

CALL_METHOD_RETURN_BOOLEAN(Java_net_bitmovin_libdash_xml_DOMParser_, Parse)
CALL_METHOD_RETURN_OBJECTPTR(Java_net_bitmovin_libdash_xml_DOMParser_, GetRootNode, dash::xml::Node, "net/bitmovin/libdash/xml/Node")
CALL_METHOD_RETURN_VOID(Java_net_bitmovin_libdash_xml_DOMParser_, Print)
