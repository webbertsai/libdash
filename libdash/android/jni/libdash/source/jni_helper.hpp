#ifndef LIBDASH_JNI_HELPER_HPP
#define LIBDASH_JNI_HELPER_HPP

#include <jni.h>
#include <string>



namespace jni_helper
{



jstring createJString(JNIEnv *env, const char* cStr);
std::string convertJStringToStdString(JNIEnv *env, jstring &toCast);
jstring convertStdStringToJString(JNIEnv *env, const std::string &toCast);


template <class classType>
jlong convertPtrToJLong(const classType *ptr)
{
    return reinterpret_cast<jlong>(ptr);
}

template <class classType>
classType* convertJLongToPtr(const jlong &ptr)
{
    return reinterpret_cast<classType*>(ptr);
}

template <class classType>
jobject createObject(JNIEnv *env, const classType *ptr, const char* className)
{
    jlong jPtr = jni_helper::convertPtrToJLong(ptr);
    jclass clazz = env->FindClass(className);
    jobject result = env->NewObject(clazz, env->GetMethodID(clazz, "<init>", "(J)V"), jPtr);

    return result;
}

template <class classType>
classType* getClassPtr(JNIEnv *env, jobject &obj)
{
    jfieldID fid;
    jclass cls = env->GetObjectClass(obj);

    fid = env->GetFieldID(cls, "cppThis", "J");
    if (fid == 0) {
        return 0;
    }
    jlong cppThis = env->GetLongField(obj, fid);
    return convertJLongToPtr<classType>(cppThis);
}

template <class classType>
jlong createAndCastClass()
{
    return convertPtrToJLong(new classType());
}

template <class classType>
void destroyInstance(JNIEnv *env, jobject &obj)
{
    delete jni_helper::getClassPtr<classType>(env, obj);

    jfieldID fid;
    jclass cls = env->GetObjectClass(obj);
    fid = env->GetFieldID(cls, "cppThis", "J");
    if (fid == 0) {
        return;
    }
    env->SetLongField(obj, fid, 0);
}


}

#define CALL_INITIALISECPPCLASS(prefix) jlong prefix##initialiseCppClass(JNIEnv *, jobject) \
{\
    return jni_helper::createAndCastClass<LOCAL_CLASS>();\
}

#define CALL_DESTROYCPPCLASS(prefix) void prefix##destoryCppClass(JNIEnv *env, jobject obj) \
{\
    jni_helper::destroyInstance<LOCAL_CLASS>(env, obj); \
}


#define CALL_METHOD_RETURN_STRING(prefix, method) \
jstring prefix##method(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return jni_helper::createJString(env, "classPtr == 0"); \
    } \
    const std::string& result(classPtr->method()); \
    return jni_helper::convertStdStringToJString(env, result); \
}

#define CALL_METHOD_RETURN_INT(prefix, method) jint prefix##method(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return -1; \
    } \
    const int& result(classPtr->method()); \
    return result; \
}

#define CALL_METHOD_RETURN_STRINGVECTOR(prefix, method) jobject prefix##method(JNIEnv *env, jobject obj) \
{   \
    jclass clazz_vector = env->FindClass("java/util/ArrayList");  \
    jobject result = env->NewObject(clazz_vector, env->GetMethodID(clazz_vector, "<init>", "()V"));\
\
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0)\
    {\
        jstring error = jni_helper::convertStdStringToJString(env, "classPtr == 0");\
\
        env->CallBooleanMethod(result, env->GetMethodID(clazz_vector, "add", "(Ljava/lang/Object;)Z"), error);\
        return result;\
    }\
    typedef std::vector<std::string> t_vector;\
    const t_vector &toCast(classPtr->method());\
\
    for (t_vector::const_iterator it = toCast.begin(); it != toCast.end(); ++it)\
    {\
        const std::string &work(*it);\
        jstring workCasted = jni_helper::convertStdStringToJString(env, work);\
\
        env->CallBooleanMethod(result, env->GetMethodID(clazz_vector, "add", "(Ljava/lang/Object;)Z"), workCasted);\
    }\
\
    return result;\
}


#define CALL_METHOD_RETURN_OBJECTPTRVECTOR(prefix, method, cppClassType, javaClassType) jobject prefix##method(JNIEnv *env, jobject obj) \
{   \
    jclass clazz_vector = env->FindClass("java/util/ArrayList");  \
    jobject result = env->NewObject(clazz_vector, env->GetMethodID(clazz_vector, "<init>", "()V"));\
\
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0)\
    {\
        return result;\
    }\
    typedef std::vector<cppClassType*> t_vector;\
    const t_vector &toCast(classPtr->method());\
\
    for (t_vector::const_iterator it = toCast.begin(); it != toCast.end(); ++it)\
    {\
        cppClassType* work(*it); \
        jlong workJLong = jni_helper::convertPtrToJLong(work); \
\
        jclass clazz_cast = env->FindClass(javaClassType);  \
        jobject object_cast = env->NewObject(clazz_cast, env->GetMethodID(clazz_cast, "<init>", "(J)V"), workJLong);\
\
        env->CallBooleanMethod(result, env->GetMethodID(clazz_vector, "add", "(Ljava/lang/Object;)Z"), object_cast);\
    }\
\
    return result;\
}

#define CALL_METHOD_RETURN_OBJECTPTR(prefix, method, cppClassType, javaClassType) jobject prefix##method(JNIEnv *env, jobject obj) \
{   \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0)\
    {\
        return 0;\
    }\
    const cppClassType *toCast(classPtr->method());\
    jlong workJLong = jni_helper::convertPtrToJLong(toCast); \
\
    jclass clazz_cast = env->FindClass(javaClassType);  \
    jobject object_cast = env->NewObject(clazz_cast, env->GetMethodID(clazz_cast, "<init>", "(J)V"), workJLong);\
\
    return object_cast;\
}

#endif // LIBDASH_JNI_HELPER_HPP
