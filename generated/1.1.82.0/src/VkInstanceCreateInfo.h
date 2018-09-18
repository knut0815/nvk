/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 * I CANT STOP SCREAMING
 */
#ifndef __VK_VKINSTANCECREATEINFO_H__
#define __VK_VKINSTANCECREATEINFO_H__

#include <nan.h>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

class _VkInstanceCreateInfo: public Nan::ObjectWrap {

  public:
    // #methods
    static NAN_METHOD(New);
    // #accessors
    static NAN_GETTER(GetsType);
    static NAN_SETTER(SetsType);
    
      Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> pApplicationInfo;
      static NAN_GETTER(GetpApplicationInfo);
    static NAN_SETTER(SetpApplicationInfo);
    
    static NAN_GETTER(GetenabledLayerCount);
    static NAN_SETTER(SetenabledLayerCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> ppEnabledLayerNames;
    static NAN_GETTER(GetppEnabledLayerNames);
    static NAN_SETTER(SetppEnabledLayerNames);
    
    static NAN_GETTER(GetenabledExtensionCount);
    static NAN_SETTER(SetenabledExtensionCount);
    
    Nan::Persistent<v8::Array, v8::CopyablePersistentTraits<v8::Array>> ppEnabledExtensionNames;
    static NAN_GETTER(GetppEnabledExtensionNames);
    static NAN_SETTER(SetppEnabledExtensionNames);
    

    // real instance
    VkInstanceCreateInfo instance = {};

    static Nan::Persistent<v8::FunctionTemplate> constructor;
    static void Initialize(v8::Local<v8::Object> exports);

  private:
    _VkInstanceCreateInfo();
    ~_VkInstanceCreateInfo();

};

#endif