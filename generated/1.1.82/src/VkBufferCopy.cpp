/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 */
#include "utils.h"
#include "index.h"
#include "VkBufferCopy.h"

Nan::Persistent<v8::FunctionTemplate> _VkBufferCopy::constructor;

_VkBufferCopy::_VkBufferCopy() {
  
}

_VkBufferCopy::~_VkBufferCopy() {
  //printf("VkBufferCopy deconstructed!!\n");
}

void _VkBufferCopy::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkBufferCopy::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkBufferCopy").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("srcOffset").ToLocalChecked(), GetsrcOffset, SetsrcOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstOffset").ToLocalChecked(), GetdstOffset, SetdstOffset, ctor);
  SetPrototypeAccessor(proto, Nan::New("size").ToLocalChecked(), Getsize, Setsize, ctor);
  Nan::Set(target, Nan::New("VkBufferCopy").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkBufferCopy::New) {
  if (info.IsConstructCall()) {
    _VkBufferCopy* self = new _VkBufferCopy();
    self->Wrap(info.Holder());
    info.GetReturnValue().Set(info.Holder());
  } else {
    Nan::ThrowError("VkBufferCopy constructor cannot be invoked without 'new'");
  }
};

// srcOffset
NAN_GETTER(_VkBufferCopy::GetsrcOffset) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcOffset));
}NAN_SETTER(_VkBufferCopy::SetsrcOffset) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  self->instance.srcOffset = static_cast<uint64_t>(value->NumberValue());
}// dstOffset
NAN_GETTER(_VkBufferCopy::GetdstOffset) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstOffset));
}NAN_SETTER(_VkBufferCopy::SetdstOffset) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  self->instance.dstOffset = static_cast<uint64_t>(value->NumberValue());
}// size
NAN_GETTER(_VkBufferCopy::Getsize) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.size));
}NAN_SETTER(_VkBufferCopy::Setsize) {
  _VkBufferCopy *self = Nan::ObjectWrap::Unwrap<_VkBufferCopy>(info.This());
  self->instance.size = static_cast<uint64_t>(value->NumberValue());
}