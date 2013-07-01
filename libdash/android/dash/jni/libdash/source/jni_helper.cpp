#include "jni_helper.hpp"


jstring jni_helper::createJString(JNIEnv * env, const char *cStr)
{
    return env->NewStringUTF(cStr);
}

std::string jni_helper::convertJStringToStdString(JNIEnv *env, jstring &toCast)
{
    const char *inCStr = env->GetStringUTFChars(toCast, NULL);
    const std::string result(inCStr);
    env->ReleaseStringUTFChars(toCast, inCStr);
    return result;
}


jstring jni_helper::convertStdStringToJString(JNIEnv *env, const std::string &toCast)
{
    return createJString(env, toCast.data());
}


void jni_helper::createJavaArrayList(JNIEnv *env, jclass *resultClass, jobject *resultObject)
{
    jclass clazz_vector = env->FindClass("java/util/ArrayList");
    jobject obj_vector = env->NewObject(clazz_vector, env->GetMethodID(clazz_vector, "<init>", "()V"));
    if (resultClass != 0)
    {
        *resultClass = clazz_vector;
    }
    if (resultObject != 0)
    {
        *resultObject = obj_vector;
    }
}


void jni_helper::createJavaMap(JNIEnv *env, jclass *resultClass, jobject *resultObject)
{
    jclass clazz_map = env->FindClass("java/util/TreeMap");
    jobject obj_map = env->NewObject(clazz_map, env->GetMethodID(clazz_map, "<init>", "()V"));
    if (resultClass != 0)
    {
        *resultClass = clazz_map;
    }
    if (resultObject != 0)
    {
        *resultObject = obj_map;
    }
}


int jni_helper::convertJEnumToInt(JNIEnv *env, jobject &toCastEnum)
{
    jclass clazz = env->GetObjectClass(toCastEnum);
    jint enumOridinal = env->CallIntMethod(toCastEnum, env->GetMethodID(clazz, "ordinal", "()I"));
    int enumCast = enumOridinal; \
    return enumCast;
}
