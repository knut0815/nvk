/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 * I CANT STOP SCREAMING
 */
#include "VkSampler.h"

Nan::Persistent<v8::FunctionTemplate> _VkSampler::constructor;

_VkSampler::_VkSampler() {}
_VkSampler::~_VkSampler() {}

void _VkSampler::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // Constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkSampler::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkSampler").ToLocalChecked());

  // Prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();

  Nan::Set(target, Nan::New("VkSampler").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkSampler::New) {
  _VkSampler* self = new _VkSampler();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};
