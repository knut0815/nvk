/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 * I CANT STOP SCREAMING
 */
#ifndef __VK_VKDESCRIPTORSET_H__
#define __VK_VKDESCRIPTORSET_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkDescriptorSet: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);

    // real instance
    VkDescriptorSet instance;

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkDescriptorSet();
    ~_VkDescriptorSet();

};

#endif