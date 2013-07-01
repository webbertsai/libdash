#include "net_bitmovin_libdash_DASHManager.h"

#include "manager/DASHManager.h"

#ifdef LOCAL_CLASS
#   error local class already set
#else
#   define LOCAL_CLASS dash::DASHManager
#endif

#include "jni_helper.hpp"

CALL_INITIALISECPPCLASS(Java_net_bitmovin_libdash_DASHManager_)
CALL_DESTROYCPPCLASS(Java_net_bitmovin_libdash_DASHManager_)

jobject Java_net_bitmovin_libdash_DASHManager_Open(JNIEnv *env, jobject obj, jstring str)
{
    const std::string path(jni_helper::convertJStringToStdString(env, str));
    dash::DASHManager* mgr(jni_helper::getClassPtr<dash::DASHManager>(env, obj));

    // TODO: ::Open should take const parameter; remove const_cast
    dash::mpd::IMPD* ptr(mgr->Open(const_cast<char*>(path.data())));

    return jni_helper::createObject(env, ptr, "net/bitmovin/libdash/mpd/MPD");
}
