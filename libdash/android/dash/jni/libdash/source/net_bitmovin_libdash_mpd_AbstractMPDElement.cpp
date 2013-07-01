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

CALL_METHOD_OBJECT_RETURN_VOID(Java_net_bitmovin_libdash_mpd_AbstractMPDElement_, AddAdditionalSubNode, dash::xml::INode)


void Java_net_bitmovin_libdash_mpd_AbstractMPDElement_AddRawAttributesNative(JNIEnv *env, jobject obj, jobjectArray keys, jobjectArray values)
{
    /*std::map<std::string, std::string> cast;

    jclass clazz_map = env->GetObjectClass(attributes);

    jobject keySet = env->CallObjectMethod(attributes, env->GetMethodID(clazz_map, "keySet", "()Ljava.util.Set;"));
    jobjectArray keySetArray = env->CallObjectMethod(keySet, env->GetMethodID(env->GetObjectClass(keySet), "toArray", "()[Ljava.lang.Object;"));

    jsize num = env->GetArrayLength(JNIEnv *, keySetArray);
    for (jsize ind = 0; ind < num; ++ind)
    {
        jstring key = env->GetObjectArrayElement(keySetArray, ind);

        jstring value = env->CallObjectMethod(attributes, env->GetMethodID(clazz_map, "value", "(Ljava.lang.Object;)Ljava.lang.Object;"), key);

        std::string keyCasted = jni_helper::convertJStringToStdString(env, key);
        std::string valueCasted = jni_helper::convertJStringToStdString(env, value);

        cast[keyCasted] = valueCasted;
    }

    jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->AddRawAttributes(cast);*/

    std::map<std::string, std::string> cast;

    /*jsize num = env->GetArrayLength(keys);
    for (jsize ind = 0; ind < num; ++ind)
    {
        jobject key = env->GetObjectArrayElement(keys, ind);
        jobject value = env->GetObjectArrayElement(values, ind);

        std::string keyCasted = jni_helper::convertJStringToStdString(env, key);
        std::string valueCasted = jni_helper::convertJStringToStdString(env, value);

        cast[keyCasted] = valueCasted;
    }*/

    jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->AddRawAttributes(cast);
}
