#include "net_bitmovin_libdash_xml_DOMHelper.h"

#include "xml/DOMHelper.h"

#include "jni_helper.hpp"

jobject Java_net_bitmovin_libdash_xml_DOMHelper_GetElementByTagName(JNIEnv *env, jclass, jobject arg0, jstring arg1, jboolean arg2)
{
    dash::xml::Node *arg0Casted = jni_helper::getClassPtr<dash::xml::Node>(env, arg0);
    const std::string &arg1Casted(jni_helper::convertJStringToStdString(env, arg1));
    const bool arg2Casted = arg2;

    const std::vector<dash::xml::Node*> &result(dash::xml::DOMHelper::GetElementByTagName(arg0Casted, arg1Casted, arg2Casted));

    jni_helper::convertStdVectorToJavaArrayList<dash::xml::Node>(env, "net/bitmovin/libdash/xml/Node", result);
}


jobject Java_net_bitmovin_libdash_xml_DOMHelper_GetChildElementByTagName(JNIEnv *env, jclass, jobject arg0, jstring arg1)
{
    dash::xml::Node *arg0Casted = jni_helper::getClassPtr<dash::xml::Node>(env, arg0);
    const std::string &arg1Casted(jni_helper::convertJStringToStdString(env, arg1));

    const std::vector<dash::xml::Node*> &result(dash::xml::DOMHelper::GetChildElementByTagName(arg0Casted, arg1Casted));

    jni_helper::convertStdVectorToJavaArrayList<dash::xml::Node>(env, "net/bitmovin/libdash/xml/Node", result);
}
