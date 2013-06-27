#include "net_bitmovin_libdash_mpd_AbstractMPDElement.h"

#include "mpd/AbstractMPDElement.h"

#include <map>

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::mpd::AbstractMPDElement
#endif

#include "jni_helper.hpp"

CALL_METHOD_RETURN_OBJECTPTRVECTOR(Java_net_bitmovin_libdash_mpd_AbstractMPDElement_, GetAdditionalSubNodes, dash::xml::INode, "net/bitmovin/libdash/xml/Node")

jobject Java_net_bitmovin_libdash_mpd_AbstractMPDElement_GetRawAttributes(JNIEnv *env, jobject obj)
{
    typedef std::map<std::string, std::string> t_map;
    LOCAL_CLASS* thiz(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));
    if (thiz == 0)
    {
        return 0;
    }
    const t_map &toCast(thiz->GetRawAttributes());

    jclass map_clazz;
    jobject map_obj = 0;
    jni_helper::createJavaMap(env, &map_clazz, &map_obj);

    for (t_map::const_iterator it = toCast.begin(); it != toCast.end(); ++it)
    {
        jstring addA = jni_helper::convertStdStringToJString(env, it->first);
        jstring addB = jni_helper::convertStdStringToJString(env, it->second);

        jni_helper::addToJavaMap<jstring, jstring>(env, map_clazz, map_obj, addA, addB);
    }

    return map_obj;
}

