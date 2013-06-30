#ifndef LIBDASH_JNI_HELPER_HPP
#define LIBDASH_JNI_HELPER_HPP

#include <jni.h>
#include <string>
#include <vector>



namespace jni_helper
{



jstring createJString(JNIEnv *env, const char* cStr);
std::string convertJStringToStdString(JNIEnv *env, jstring &toCast);
jstring convertStdStringToJString(JNIEnv *env, const std::string &toCast);
int convertJEnumToInt(JNIEnv *env, jobject &toCastEnum);
void createJavaArrayList(JNIEnv *env, jclass *resultClass, jobject *resultObject);
void createJavaMap(JNIEnv *env, jclass *resultClass, jobject *resultObject);


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

template <class classType>
jobject convertCppInstanceToJObject(JNIEnv *env, classType *toCast, const char *javaClass, jclass *resultClass = 0)
{
    jlong workJLong = jni_helper::convertPtrToJLong(toCast);

    jclass clazz_cast = env->FindClass(javaClass);
    jobject object_cast = env->NewObject(clazz_cast, env->GetMethodID(clazz_cast, "<init>", "(J)V"), workJLong);

    if (resultClass != 0)
    {
        *resultClass = clazz_cast;
    }
    return object_cast;
}

template <typename addType>
void addToJavaArrayList(JNIEnv *env, const jclass &vector_class, const jobject &vector_obj, const addType& toAdd)
{
    env->CallBooleanMethod(vector_obj, env->GetMethodID(vector_class, "add", "(Ljava/lang/Object;)Z"), toAdd);\
}

template <typename addTypeA, typename addTypeB>
void addToJavaMap(JNIEnv *env, const jclass &map_class, const jobject &map_obj, const addTypeA& toAddA, const addTypeB& toAddB)
{
    env->CallObjectMethod(map_obj, env->GetMethodID(map_class, "put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;"), toAddA, toAddB);\
}

template <class toCastToType>
std::vector<toCastToType*> convertJArrayListToStdVector(JNIEnv *env, jobject toCast)
{
    typedef std::vector<toCastToType*> t_vector;
    t_vector result;

    jclass clazz_vector = env->GetObjectClass(toCast);
    jint size = env->CallIntMethod(toCast, env->GetMethodID(clazz_vector, "size", "()I"));
    int sizeCast = size;
    for (int ind = 0; ind < sizeCast; ++ind)
    {
        jobject work = env->CallObjectMethod(toCast, env->GetMethodID(clazz_vector, "get", "()Ljava/lang/Object;"));
        toCastToType *workCasted(getClassPtr<toCastToType>(env, work));
        result.push_back(workCasted);
    }
    return result;
}

template <class classType>
jobject convertStdVectorToJavaArrayList(JNIEnv *env, const char *javaClassType, const std::vector<classType*>& toCast)
{
    typedef std::vector<classType*> t_vector;

    jclass clazz_vector;
    jobject result;
    jni_helper::createJavaArrayList(env, &clazz_vector, &result);

    for (typename t_vector::const_iterator it = toCast.begin(); it != toCast.end(); ++it)\
    {
        classType* work(*it);
        jobject object_cast = jni_helper::convertCppInstanceToJObject(env, work, javaClassType, 0);

        jni_helper::addToJavaArrayList(env, clazz_vector, result, object_cast);
    }
}


} // jni_helper


#define CALL_INITIALISECPPCLASS(prefix) jlong prefix##initialiseCppClass(JNIEnv *, jobject) \
{\
    return jni_helper::createAndCastClass<LOCAL_CLASS>();\
}

#define CALL_DESTROYCPPCLASS(prefix) void prefix##destoryCppClass(JNIEnv *env, jobject obj) \
{\
    jni_helper::destroyInstance<LOCAL_CLASS>(env, obj); \
}

#define CALL_METHOD_ENUM_RETURN_VOID(prefix, method, cppEnumType) \
void prefix##method(JNIEnv *env, jobject obj, jobject enumWork) \
{ \
    int enumCast = jni_helper::convertJEnumToInt(env, enumWork); \
    jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)->method((cppEnumType)enumCast); \
}

#define CALL_METHOD_OBJECT_RETURN_VOID(prefix, method, cppClassType) \
void prefix##method(JNIEnv *env, jobject obj, jobject passOn) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)); \
    classPtr->method(jni_helper::getClassPtr<cppClassType>(env, passOn)); \
}

#define CALL_METHOD_STRING_RETURN_VOID_SUFFIX(prefix, method, suffix) \
void prefix##method##suffix(JNIEnv *env, jobject obj, jstring passOn) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)); \
    classPtr->method(jni_helper::convertJStringToStdString(env, passOn)); \
}
#define CALL_METHOD_STRING_RETURN_VOID(prefix, method) CALL_METHOD_STRING_RETURN_VOID_SUFFIX(prefix, method, )

#define CALL_METHOD_NUMBER_RETURN_VOID_SUFFIX(prefix, method, suffix, cppNumberType, javaNumberType) \
void prefix##method(JNIEnv *env, jobject obj, javaNumberType passOn) \
{ \
    cppNumberType passOnCast = passOn; \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj)); \
    classPtr->method(passOnCast); \
}
#define CALL_METHOD_NUMBER_RETURN_VOID(prefix, method, cppNumberType, javaNumberType) CALL_METHOD_NUMBER_RETURN_VOID_SUFFIX(prefix, method, , cppNumberType, javaNumberType)

#define CALL_METHOD_RETURN_BOOLEAN_SUFFIX(prefix, method, suffix) \
jboolean prefix##method##suffix(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return 0; \
    } \
    const bool& result(classPtr->method()); \
    return result; \
}

#define CALL_METHOD_RETURN_BOOLEAN(prefix, method) CALL_METHOD_RETURN_BOOLEAN_SUFFIX(prefix, method, )

#define CALL_METHOD_RETURN_VOID(prefix, method) \
void prefix##method(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return; \
    } \
    classPtr->method(); \
}

#define CALL_METHOD_RETURN_STRING_SUFFIX(prefix, method, suffix) \
jstring prefix##method##suffix(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return jni_helper::createJString(env, "classPtr == 0"); \
    } \
    const std::string& result(classPtr->method()); \
    return jni_helper::convertStdStringToJString(env, result); \
}

#define CALL_METHOD_RETURN_STRING(prefix, method) CALL_METHOD_RETURN_STRING_SUFFIX(prefix, method, )

#define CALL_METHOD_RETURN_INT_SUFFIX(prefix, method, suffix) jint prefix##method##suffix(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return -1; \
    } \
    const int& result(classPtr->method()); \
    return result; \
}
#define CALL_METHOD_RETURN_INT(prefix, method) CALL_METHOD_RETURN_INT_SUFFIX(prefix, method, )

#define CALL_METHOD_RETURN_SHORT(prefix, method) jshort prefix##method(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return -1; \
    } \
    const short int& result(classPtr->method()); \
    return result; \
}

#define CALL_METHOD_RETURN_LONG(prefix, method) jlong prefix##method(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return -1; \
    } \
    const long& result(classPtr->method()); \
    return result; \
}

#define CALL_METHOD_RETURN_BYTE(prefix, method) jbyte prefix##method(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return -1; \
    } \
    const uint8_t& result(classPtr->method()); \
    return result; \
}

#define CALL_METHOD_RETURN_DOUBLE(prefix, method) jdouble prefix##method(JNIEnv *env, jobject obj) \
{ \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0) \
    { \
        return -1; \
    } \
    const double& result(classPtr->method()); \
    return result; \
}

#define CALL_METHOD_RETURN_STRINGVECTOR(prefix, method) jobject prefix##method(JNIEnv *env, jobject obj) \
{   \
    jclass clazz_vector;\
    jobject result;\
    jni_helper::createJavaArrayList(env, &clazz_vector, &result); \
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
        jni_helper::addToJavaArrayList(env, clazz_vector, result, workCasted); \
    }\
\
    return result;\
}

#define CALL_METHOD_RETURN_INTVECTOR(prefix, method, cppNativeType) jobject prefix##method(JNIEnv *env, jobject obj) \
{   \
    jclass clazz_vector;\
    jobject result;\
    jni_helper::createJavaArrayList(env, &clazz_vector, &result); \
\
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0)\
    {\
        return result;\
    }\
    typedef std::vector<cppNativeType> t_vector;\
    const t_vector &toCast(classPtr->method());\
\
    for (t_vector::const_iterator it = toCast.begin(); it != toCast.end(); ++it)\
    {\
        cppNativeType work(*it); \
        jclass clazz_cast = env->FindClass("java.lang.Integer"); \
        jobject object_cast = env->NewObject(clazz_cast, env->GetMethodID(clazz_cast, "<init>", "(I)V"), work); \
    \
        jni_helper::addToJavaArrayList(env, clazz_vector, result, object_cast); \
    }\
\
    return result;\
}


#define CALL_METHOD_RETURN_OBJECTPTRVECTOR(prefix, method, cppClassType, javaClassType) jobject prefix##method(JNIEnv *env, jobject obj) \
{   \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0)\
    {\
        return 0;\
    }\
    typedef std::vector<cppClassType*> t_vector;\
    const t_vector &toCast(classPtr->method());\
\
    return jni_helper::convertStdVectorToJavaArrayList<cppClassType>(env, javaClassType, toCast); \
}

#define CALL_METHOD_RETURN_OBJECTPTR(prefix, method, cppClassType, javaClassType) jobject prefix##method(JNIEnv *env, jobject obj) \
{   \
    LOCAL_CLASS* classPtr(jni_helper::getClassPtr<LOCAL_CLASS>(env, obj));\
    if (classPtr == 0)\
    {\
        return 0;\
    }\
    const cppClassType *toCast(classPtr->method());\
    jobject object_cast = jni_helper::convertCppInstanceToJObject(env, toCast, javaClassType, 0); \
\
    return object_cast;\
}

#endif // LIBDASH_JNI_HELPER_HPP
