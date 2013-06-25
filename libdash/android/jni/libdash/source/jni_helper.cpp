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



