/*
 * MACHINE GENERATED, DO NOT EDIT
 * GENERATED BY node-vulkan v0.0.1
 * I CANT STOP SCREAMING
 */
#include "utils.h"
#include "index.h"
#include "VkImageMemoryBarrier.h"

Nan::Persistent<v8::FunctionTemplate> _VkImageMemoryBarrier::constructor;

_VkImageMemoryBarrier::_VkImageMemoryBarrier() {
}

_VkImageMemoryBarrier::~_VkImageMemoryBarrier() { }

void _VkImageMemoryBarrier::Initialize(Nan::ADDON_REGISTER_FUNCTION_ARGS_TYPE target) {
  Nan::HandleScope scope;

  // constructor
  v8::Local<v8::FunctionTemplate> ctor = Nan::New<v8::FunctionTemplate>(_VkImageMemoryBarrier::New);
  constructor.Reset(ctor);
  ctor->InstanceTemplate()->SetInternalFieldCount(1);
  ctor->SetClassName(Nan::New("VkImageMemoryBarrier").ToLocalChecked());

  // prototype
  v8::Local<v8::ObjectTemplate> proto = ctor->PrototypeTemplate();
  
  SetPrototypeAccessor(proto, Nan::New("sType").ToLocalChecked(), GetsType, SetsType, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcAccessMask").ToLocalChecked(), GetsrcAccessMask, SetsrcAccessMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstAccessMask").ToLocalChecked(), GetdstAccessMask, SetdstAccessMask, ctor);
  SetPrototypeAccessor(proto, Nan::New("oldLayout").ToLocalChecked(), GetoldLayout, SetoldLayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("newLayout").ToLocalChecked(), GetnewLayout, SetnewLayout, ctor);
  SetPrototypeAccessor(proto, Nan::New("srcQueueFamilyIndex").ToLocalChecked(), GetsrcQueueFamilyIndex, SetsrcQueueFamilyIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("dstQueueFamilyIndex").ToLocalChecked(), GetdstQueueFamilyIndex, SetdstQueueFamilyIndex, ctor);
  SetPrototypeAccessor(proto, Nan::New("image").ToLocalChecked(), Getimage, Setimage, ctor);
  SetPrototypeAccessor(proto, Nan::New("subresourceRange").ToLocalChecked(), GetsubresourceRange, SetsubresourceRange, ctor);
  Nan::Set(target, Nan::New("VkImageMemoryBarrier").ToLocalChecked(), ctor->GetFunction());
}

NAN_METHOD(_VkImageMemoryBarrier::New) {
  _VkImageMemoryBarrier* self = new _VkImageMemoryBarrier();
  self->Wrap(info.Holder());
  info.GetReturnValue().Set(info.Holder());
};

// sType
NAN_GETTER(_VkImageMemoryBarrier::GetsType) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.sType));
}NAN_SETTER(_VkImageMemoryBarrier::SetsType) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  self->instance.sType = static_cast<VkStructureType>((int32_t)value->NumberValue());
}// srcAccessMask
NAN_GETTER(_VkImageMemoryBarrier::GetsrcAccessMask) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(static_cast<uint8_t>(self->instance.srcAccessMask)));
}NAN_SETTER(_VkImageMemoryBarrier::SetsrcAccessMask) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  self->instance.srcAccessMask = static_cast<VkAccessFlags>(value->Uint32Value());
}// dstAccessMask
NAN_GETTER(_VkImageMemoryBarrier::GetdstAccessMask) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(static_cast<uint8_t>(self->instance.dstAccessMask)));
}NAN_SETTER(_VkImageMemoryBarrier::SetdstAccessMask) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  self->instance.dstAccessMask = static_cast<VkAccessFlags>(value->Uint32Value());
}// oldLayout
NAN_GETTER(_VkImageMemoryBarrier::GetoldLayout) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.oldLayout));
}NAN_SETTER(_VkImageMemoryBarrier::SetoldLayout) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  self->instance.oldLayout = static_cast<VkImageLayout>((int32_t)value->NumberValue());
}// newLayout
NAN_GETTER(_VkImageMemoryBarrier::GetnewLayout) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.newLayout));
}NAN_SETTER(_VkImageMemoryBarrier::SetnewLayout) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  self->instance.newLayout = static_cast<VkImageLayout>((int32_t)value->NumberValue());
}// srcQueueFamilyIndex
NAN_GETTER(_VkImageMemoryBarrier::GetsrcQueueFamilyIndex) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.srcQueueFamilyIndex));
}NAN_SETTER(_VkImageMemoryBarrier::SetsrcQueueFamilyIndex) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  self->instance.srcQueueFamilyIndex = static_cast<uint32_t>(value->NumberValue());
}// dstQueueFamilyIndex
NAN_GETTER(_VkImageMemoryBarrier::GetdstQueueFamilyIndex) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  info.GetReturnValue().Set(Nan::New<v8::Number>(self->instance.dstQueueFamilyIndex));
}NAN_SETTER(_VkImageMemoryBarrier::SetdstQueueFamilyIndex) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  self->instance.dstQueueFamilyIndex = static_cast<uint32_t>(value->NumberValue());
}// image
NAN_GETTER(_VkImageMemoryBarrier::Getimage) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  v8::Local<v8::Object> obj = Nan::New(self->image);
  info.GetReturnValue().Set(obj);
}NAN_SETTER(_VkImageMemoryBarrier::Setimage) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  // js
  {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->image = obj;
  }
  // vulkan
  {
    _VkImage* obj = Nan::ObjectWrap::Unwrap<_VkImage>(value->ToObject());
    self->instance.image = obj->instance;
  }
}// subresourceRange
NAN_GETTER(_VkImageMemoryBarrier::GetsubresourceRange) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  v8::Local<v8::Object> obj = Nan::New(self->subresourceRange);
  info.GetReturnValue().Set(obj);
}NAN_SETTER(_VkImageMemoryBarrier::SetsubresourceRange) {
  _VkImageMemoryBarrier *self = Nan::ObjectWrap::Unwrap<_VkImageMemoryBarrier>(info.This());
  // js
  {
    Nan::Persistent<v8::Object, v8::CopyablePersistentTraits<v8::Object>> obj(value->ToObject());
    self->subresourceRange = obj;
  }
  // vulkan
  {
    _VkImageSubresourceRange* obj = Nan::ObjectWrap::Unwrap<_VkImageSubresourceRange>(value->ToObject());
    self->instance.subresourceRange = obj->instance;
  }
}