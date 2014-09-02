// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: controller.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "controller.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace maid {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* ControllerMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ControllerMeta_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_controller_2eproto() {
  protobuf_AddDesc_controller_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "controller.proto");
  GOOGLE_CHECK(file != NULL);
  ControllerMeta_descriptor_ = file->message_type(0);
  static const int ControllerMeta_offsets_[9] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, service_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, method_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, transmit_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, stub_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, is_canceled_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, failed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, error_text_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, status_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, notify_),
  };
  ControllerMeta_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ControllerMeta_descriptor_,
      ControllerMeta::default_instance_,
      ControllerMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ControllerMeta, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ControllerMeta));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_controller_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ControllerMeta_descriptor_, &ControllerMeta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_controller_2eproto() {
  delete ControllerMeta::default_instance_;
  delete ControllerMeta_reflection_;
}

void protobuf_AddDesc_controller_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\020controller.proto\022\nmaid.proto\"\275\001\n\016Contr"
    "ollerMeta\022\024\n\014service_name\030\001 \001(\t\022\023\n\013metho"
    "d_name\030\002 \001(\t\022\023\n\013transmit_id\030\003 \001(\r\022\022\n\004stu"
    "b\030\004 \001(\010:\004true\022\023\n\013is_canceled\030\005 \001(\010\022\016\n\006fa"
    "iled\030\006 \001(\010\022\022\n\nerror_text\030\007 \001(\t\022\016\n\006status"
    "\030\010 \001(\005\022\016\n\006notify\030\t \001(\010", 222);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "controller.proto", &protobuf_RegisterTypes);
  ControllerMeta::default_instance_ = new ControllerMeta();
  ControllerMeta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_controller_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_controller_2eproto {
  StaticDescriptorInitializer_controller_2eproto() {
    protobuf_AddDesc_controller_2eproto();
  }
} static_descriptor_initializer_controller_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int ControllerMeta::kServiceNameFieldNumber;
const int ControllerMeta::kMethodNameFieldNumber;
const int ControllerMeta::kTransmitIdFieldNumber;
const int ControllerMeta::kStubFieldNumber;
const int ControllerMeta::kIsCanceledFieldNumber;
const int ControllerMeta::kFailedFieldNumber;
const int ControllerMeta::kErrorTextFieldNumber;
const int ControllerMeta::kStatusFieldNumber;
const int ControllerMeta::kNotifyFieldNumber;
#endif  // !_MSC_VER

ControllerMeta::ControllerMeta()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:maid.proto.ControllerMeta)
}

void ControllerMeta::InitAsDefaultInstance() {
}

ControllerMeta::ControllerMeta(const ControllerMeta& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:maid.proto.ControllerMeta)
}

void ControllerMeta::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  service_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  transmit_id_ = 0u;
  stub_ = true;
  is_canceled_ = false;
  failed_ = false;
  error_text_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  status_ = 0;
  notify_ = false;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ControllerMeta::~ControllerMeta() {
  // @@protoc_insertion_point(destructor:maid.proto.ControllerMeta)
  SharedDtor();
}

void ControllerMeta::SharedDtor() {
  if (service_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete service_name_;
  }
  if (method_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete method_name_;
  }
  if (error_text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete error_text_;
  }
  if (this != default_instance_) {
  }
}

void ControllerMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ControllerMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ControllerMeta_descriptor_;
}

const ControllerMeta& ControllerMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_controller_2eproto();
  return *default_instance_;
}

ControllerMeta* ControllerMeta::default_instance_ = NULL;

ControllerMeta* ControllerMeta::New() const {
  return new ControllerMeta;
}

void ControllerMeta::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<ControllerMeta*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 255) {
    ZR_(is_canceled_, failed_);
    if (has_service_name()) {
      if (service_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        service_name_->clear();
      }
    }
    if (has_method_name()) {
      if (method_name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        method_name_->clear();
      }
    }
    transmit_id_ = 0u;
    stub_ = true;
    if (has_error_text()) {
      if (error_text_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        error_text_->clear();
      }
    }
    status_ = 0;
  }
  notify_ = false;

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ControllerMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:maid.proto.ControllerMeta)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string service_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_service_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->service_name().data(), this->service_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "service_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_method_name;
        break;
      }

      // optional string method_name = 2;
      case 2: {
        if (tag == 18) {
         parse_method_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->method_name().data(), this->method_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "method_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_transmit_id;
        break;
      }

      // optional uint32 transmit_id = 3;
      case 3: {
        if (tag == 24) {
         parse_transmit_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &transmit_id_)));
          set_has_transmit_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_stub;
        break;
      }

      // optional bool stub = 4 [default = true];
      case 4: {
        if (tag == 32) {
         parse_stub:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &stub_)));
          set_has_stub();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_is_canceled;
        break;
      }

      // optional bool is_canceled = 5;
      case 5: {
        if (tag == 40) {
         parse_is_canceled:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &is_canceled_)));
          set_has_is_canceled();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_failed;
        break;
      }

      // optional bool failed = 6;
      case 6: {
        if (tag == 48) {
         parse_failed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &failed_)));
          set_has_failed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_error_text;
        break;
      }

      // optional string error_text = 7;
      case 7: {
        if (tag == 58) {
         parse_error_text:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_error_text()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->error_text().data(), this->error_text().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "error_text");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(64)) goto parse_status;
        break;
      }

      // optional int32 status = 8;
      case 8: {
        if (tag == 64) {
         parse_status:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &status_)));
          set_has_status();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(72)) goto parse_notify;
        break;
      }

      // optional bool notify = 9;
      case 9: {
        if (tag == 72) {
         parse_notify:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &notify_)));
          set_has_notify();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:maid.proto.ControllerMeta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:maid.proto.ControllerMeta)
  return false;
#undef DO_
}

void ControllerMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:maid.proto.ControllerMeta)
  // optional string service_name = 1;
  if (has_service_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->service_name().data(), this->service_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "service_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->service_name(), output);
  }

  // optional string method_name = 2;
  if (has_method_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method_name().data(), this->method_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "method_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->method_name(), output);
  }

  // optional uint32 transmit_id = 3;
  if (has_transmit_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->transmit_id(), output);
  }

  // optional bool stub = 4 [default = true];
  if (has_stub()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->stub(), output);
  }

  // optional bool is_canceled = 5;
  if (has_is_canceled()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(5, this->is_canceled(), output);
  }

  // optional bool failed = 6;
  if (has_failed()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(6, this->failed(), output);
  }

  // optional string error_text = 7;
  if (has_error_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error_text().data(), this->error_text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "error_text");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->error_text(), output);
  }

  // optional int32 status = 8;
  if (has_status()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(8, this->status(), output);
  }

  // optional bool notify = 9;
  if (has_notify()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(9, this->notify(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:maid.proto.ControllerMeta)
}

::google::protobuf::uint8* ControllerMeta::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:maid.proto.ControllerMeta)
  // optional string service_name = 1;
  if (has_service_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->service_name().data(), this->service_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "service_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->service_name(), target);
  }

  // optional string method_name = 2;
  if (has_method_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method_name().data(), this->method_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "method_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->method_name(), target);
  }

  // optional uint32 transmit_id = 3;
  if (has_transmit_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->transmit_id(), target);
  }

  // optional bool stub = 4 [default = true];
  if (has_stub()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(4, this->stub(), target);
  }

  // optional bool is_canceled = 5;
  if (has_is_canceled()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(5, this->is_canceled(), target);
  }

  // optional bool failed = 6;
  if (has_failed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(6, this->failed(), target);
  }

  // optional string error_text = 7;
  if (has_error_text()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->error_text().data(), this->error_text().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "error_text");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        7, this->error_text(), target);
  }

  // optional int32 status = 8;
  if (has_status()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(8, this->status(), target);
  }

  // optional bool notify = 9;
  if (has_notify()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(9, this->notify(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:maid.proto.ControllerMeta)
  return target;
}

int ControllerMeta::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string service_name = 1;
    if (has_service_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->service_name());
    }

    // optional string method_name = 2;
    if (has_method_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->method_name());
    }

    // optional uint32 transmit_id = 3;
    if (has_transmit_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->transmit_id());
    }

    // optional bool stub = 4 [default = true];
    if (has_stub()) {
      total_size += 1 + 1;
    }

    // optional bool is_canceled = 5;
    if (has_is_canceled()) {
      total_size += 1 + 1;
    }

    // optional bool failed = 6;
    if (has_failed()) {
      total_size += 1 + 1;
    }

    // optional string error_text = 7;
    if (has_error_text()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->error_text());
    }

    // optional int32 status = 8;
    if (has_status()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->status());
    }

  }
  if (_has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    // optional bool notify = 9;
    if (has_notify()) {
      total_size += 1 + 1;
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ControllerMeta::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ControllerMeta* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ControllerMeta*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ControllerMeta::MergeFrom(const ControllerMeta& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_service_name()) {
      set_service_name(from.service_name());
    }
    if (from.has_method_name()) {
      set_method_name(from.method_name());
    }
    if (from.has_transmit_id()) {
      set_transmit_id(from.transmit_id());
    }
    if (from.has_stub()) {
      set_stub(from.stub());
    }
    if (from.has_is_canceled()) {
      set_is_canceled(from.is_canceled());
    }
    if (from.has_failed()) {
      set_failed(from.failed());
    }
    if (from.has_error_text()) {
      set_error_text(from.error_text());
    }
    if (from.has_status()) {
      set_status(from.status());
    }
  }
  if (from._has_bits_[8 / 32] & (0xffu << (8 % 32))) {
    if (from.has_notify()) {
      set_notify(from.notify());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ControllerMeta::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ControllerMeta::CopyFrom(const ControllerMeta& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ControllerMeta::IsInitialized() const {

  return true;
}

void ControllerMeta::Swap(ControllerMeta* other) {
  if (other != this) {
    std::swap(service_name_, other->service_name_);
    std::swap(method_name_, other->method_name_);
    std::swap(transmit_id_, other->transmit_id_);
    std::swap(stub_, other->stub_);
    std::swap(is_canceled_, other->is_canceled_);
    std::swap(failed_, other->failed_);
    std::swap(error_text_, other->error_text_);
    std::swap(status_, other->status_);
    std::swap(notify_, other->notify_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ControllerMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ControllerMeta_descriptor_;
  metadata.reflection = ControllerMeta_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace maid

// @@protoc_insertion_point(global_scope)
