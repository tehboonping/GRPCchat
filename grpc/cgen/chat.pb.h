// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: chat.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_chat_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_chat_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3015000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3015008 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_chat_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_chat_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_chat_2eproto;
::PROTOBUF_NAMESPACE_ID::Metadata descriptor_table_chat_2eproto_metadata_getter(int index);
namespace grpc_chat {
class Request;
struct RequestDefaultTypeInternal;
extern RequestDefaultTypeInternal _Request_default_instance_;
class Response;
struct ResponseDefaultTypeInternal;
extern ResponseDefaultTypeInternal _Response_default_instance_;
}  // namespace grpc_chat
PROTOBUF_NAMESPACE_OPEN
template<> ::grpc_chat::Request* Arena::CreateMaybeMessage<::grpc_chat::Request>(Arena*);
template<> ::grpc_chat::Response* Arena::CreateMaybeMessage<::grpc_chat::Response>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace grpc_chat {

// ===================================================================

class Request PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpc_chat.Request) */ {
 public:
  inline Request() : Request(nullptr) {}
  virtual ~Request();
  explicit constexpr Request(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Request(const Request& from);
  Request(Request&& from) noexcept
    : Request() {
    *this = ::std::move(from);
  }

  inline Request& operator=(const Request& from) {
    CopyFrom(from);
    return *this;
  }
  inline Request& operator=(Request&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Request& default_instance() {
    return *internal_default_instance();
  }
  static inline const Request* internal_default_instance() {
    return reinterpret_cast<const Request*>(
               &_Request_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Request& a, Request& b) {
    a.Swap(&b);
  }
  inline void Swap(Request* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Request* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Request* New() const final {
    return CreateMaybeMessage<Request>(nullptr);
  }

  Request* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Request>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Request& from);
  void MergeFrom(const Request& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Request* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpc_chat.Request";
  }
  protected:
  explicit Request(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_chat_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kMessageFieldNumber = 2,
    kPosttimeFieldNumber = 3,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string message = 2;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // string posttime = 3;
  void clear_posttime();
  const std::string& posttime() const;
  void set_posttime(const std::string& value);
  void set_posttime(std::string&& value);
  void set_posttime(const char* value);
  void set_posttime(const char* value, size_t size);
  std::string* mutable_posttime();
  std::string* release_posttime();
  void set_allocated_posttime(std::string* posttime);
  private:
  const std::string& _internal_posttime() const;
  void _internal_set_posttime(const std::string& value);
  std::string* _internal_mutable_posttime();
  public:

  // @@protoc_insertion_point(class_scope:grpc_chat.Request)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr posttime_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_chat_2eproto;
};
// -------------------------------------------------------------------

class Response PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:grpc_chat.Response) */ {
 public:
  inline Response() : Response(nullptr) {}
  virtual ~Response();
  explicit constexpr Response(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Response(const Response& from);
  Response(Response&& from) noexcept
    : Response() {
    *this = ::std::move(from);
  }

  inline Response& operator=(const Response& from) {
    CopyFrom(from);
    return *this;
  }
  inline Response& operator=(Response&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Response& default_instance() {
    return *internal_default_instance();
  }
  static inline const Response* internal_default_instance() {
    return reinterpret_cast<const Response*>(
               &_Response_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Response& a, Response& b) {
    a.Swap(&b);
  }
  inline void Swap(Response* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Response* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Response* New() const final {
    return CreateMaybeMessage<Response>(nullptr);
  }

  Response* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Response>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Response& from);
  void MergeFrom(const Response& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Response* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "grpc_chat.Response";
  }
  protected:
  explicit Response(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    return ::descriptor_table_chat_2eproto_metadata_getter(kIndexInFileMessages);
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kMessageFieldNumber = 2,
    kPosttimeFieldNumber = 3,
  };
  // string name = 1;
  void clear_name();
  const std::string& name() const;
  void set_name(const std::string& value);
  void set_name(std::string&& value);
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  std::string* mutable_name();
  std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string message = 2;
  void clear_message();
  const std::string& message() const;
  void set_message(const std::string& value);
  void set_message(std::string&& value);
  void set_message(const char* value);
  void set_message(const char* value, size_t size);
  std::string* mutable_message();
  std::string* release_message();
  void set_allocated_message(std::string* message);
  private:
  const std::string& _internal_message() const;
  void _internal_set_message(const std::string& value);
  std::string* _internal_mutable_message();
  public:

  // string posttime = 3;
  void clear_posttime();
  const std::string& posttime() const;
  void set_posttime(const std::string& value);
  void set_posttime(std::string&& value);
  void set_posttime(const char* value);
  void set_posttime(const char* value, size_t size);
  std::string* mutable_posttime();
  std::string* release_posttime();
  void set_allocated_posttime(std::string* posttime);
  private:
  const std::string& _internal_posttime() const;
  void _internal_set_posttime(const std::string& value);
  std::string* _internal_mutable_posttime();
  public:

  // @@protoc_insertion_point(class_scope:grpc_chat.Response)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr message_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr posttime_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_chat_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Request

// string name = 1;
inline void Request::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& Request::name() const {
  // @@protoc_insertion_point(field_get:grpc_chat.Request.name)
  return _internal_name();
}
inline void Request::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:grpc_chat.Request.name)
}
inline std::string* Request::mutable_name() {
  // @@protoc_insertion_point(field_mutable:grpc_chat.Request.name)
  return _internal_mutable_name();
}
inline const std::string& Request::_internal_name() const {
  return name_.Get();
}
inline void Request::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Request::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpc_chat.Request.name)
}
inline void Request::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpc_chat.Request.name)
}
inline void Request::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpc_chat.Request.name)
}
inline std::string* Request::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Request::release_name() {
  // @@protoc_insertion_point(field_release:grpc_chat.Request.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Request::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpc_chat.Request.name)
}

// string message = 2;
inline void Request::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& Request::message() const {
  // @@protoc_insertion_point(field_get:grpc_chat.Request.message)
  return _internal_message();
}
inline void Request::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:grpc_chat.Request.message)
}
inline std::string* Request::mutable_message() {
  // @@protoc_insertion_point(field_mutable:grpc_chat.Request.message)
  return _internal_mutable_message();
}
inline const std::string& Request::_internal_message() const {
  return message_.Get();
}
inline void Request::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Request::set_message(std::string&& value) {
  
  message_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpc_chat.Request.message)
}
inline void Request::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpc_chat.Request.message)
}
inline void Request::set_message(const char* value,
    size_t size) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpc_chat.Request.message)
}
inline std::string* Request::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Request::release_message() {
  // @@protoc_insertion_point(field_release:grpc_chat.Request.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Request::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpc_chat.Request.message)
}

// string posttime = 3;
inline void Request::clear_posttime() {
  posttime_.ClearToEmpty();
}
inline const std::string& Request::posttime() const {
  // @@protoc_insertion_point(field_get:grpc_chat.Request.posttime)
  return _internal_posttime();
}
inline void Request::set_posttime(const std::string& value) {
  _internal_set_posttime(value);
  // @@protoc_insertion_point(field_set:grpc_chat.Request.posttime)
}
inline std::string* Request::mutable_posttime() {
  // @@protoc_insertion_point(field_mutable:grpc_chat.Request.posttime)
  return _internal_mutable_posttime();
}
inline const std::string& Request::_internal_posttime() const {
  return posttime_.Get();
}
inline void Request::_internal_set_posttime(const std::string& value) {
  
  posttime_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Request::set_posttime(std::string&& value) {
  
  posttime_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpc_chat.Request.posttime)
}
inline void Request::set_posttime(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  posttime_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpc_chat.Request.posttime)
}
inline void Request::set_posttime(const char* value,
    size_t size) {
  
  posttime_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpc_chat.Request.posttime)
}
inline std::string* Request::_internal_mutable_posttime() {
  
  return posttime_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Request::release_posttime() {
  // @@protoc_insertion_point(field_release:grpc_chat.Request.posttime)
  return posttime_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Request::set_allocated_posttime(std::string* posttime) {
  if (posttime != nullptr) {
    
  } else {
    
  }
  posttime_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), posttime,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpc_chat.Request.posttime)
}

// -------------------------------------------------------------------

// Response

// string name = 1;
inline void Response::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& Response::name() const {
  // @@protoc_insertion_point(field_get:grpc_chat.Response.name)
  return _internal_name();
}
inline void Response::set_name(const std::string& value) {
  _internal_set_name(value);
  // @@protoc_insertion_point(field_set:grpc_chat.Response.name)
}
inline std::string* Response::mutable_name() {
  // @@protoc_insertion_point(field_mutable:grpc_chat.Response.name)
  return _internal_mutable_name();
}
inline const std::string& Response::_internal_name() const {
  return name_.Get();
}
inline void Response::_internal_set_name(const std::string& value) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Response::set_name(std::string&& value) {
  
  name_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpc_chat.Response.name)
}
inline void Response::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpc_chat.Response.name)
}
inline void Response::set_name(const char* value,
    size_t size) {
  
  name_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpc_chat.Response.name)
}
inline std::string* Response::_internal_mutable_name() {
  
  return name_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Response::release_name() {
  // @@protoc_insertion_point(field_release:grpc_chat.Response.name)
  return name_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Response::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), name,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpc_chat.Response.name)
}

// string message = 2;
inline void Response::clear_message() {
  message_.ClearToEmpty();
}
inline const std::string& Response::message() const {
  // @@protoc_insertion_point(field_get:grpc_chat.Response.message)
  return _internal_message();
}
inline void Response::set_message(const std::string& value) {
  _internal_set_message(value);
  // @@protoc_insertion_point(field_set:grpc_chat.Response.message)
}
inline std::string* Response::mutable_message() {
  // @@protoc_insertion_point(field_mutable:grpc_chat.Response.message)
  return _internal_mutable_message();
}
inline const std::string& Response::_internal_message() const {
  return message_.Get();
}
inline void Response::_internal_set_message(const std::string& value) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Response::set_message(std::string&& value) {
  
  message_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpc_chat.Response.message)
}
inline void Response::set_message(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpc_chat.Response.message)
}
inline void Response::set_message(const char* value,
    size_t size) {
  
  message_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpc_chat.Response.message)
}
inline std::string* Response::_internal_mutable_message() {
  
  return message_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Response::release_message() {
  // @@protoc_insertion_point(field_release:grpc_chat.Response.message)
  return message_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Response::set_allocated_message(std::string* message) {
  if (message != nullptr) {
    
  } else {
    
  }
  message_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), message,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpc_chat.Response.message)
}

// string posttime = 3;
inline void Response::clear_posttime() {
  posttime_.ClearToEmpty();
}
inline const std::string& Response::posttime() const {
  // @@protoc_insertion_point(field_get:grpc_chat.Response.posttime)
  return _internal_posttime();
}
inline void Response::set_posttime(const std::string& value) {
  _internal_set_posttime(value);
  // @@protoc_insertion_point(field_set:grpc_chat.Response.posttime)
}
inline std::string* Response::mutable_posttime() {
  // @@protoc_insertion_point(field_mutable:grpc_chat.Response.posttime)
  return _internal_mutable_posttime();
}
inline const std::string& Response::_internal_posttime() const {
  return posttime_.Get();
}
inline void Response::_internal_set_posttime(const std::string& value) {
  
  posttime_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void Response::set_posttime(std::string&& value) {
  
  posttime_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:grpc_chat.Response.posttime)
}
inline void Response::set_posttime(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  posttime_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:grpc_chat.Response.posttime)
}
inline void Response::set_posttime(const char* value,
    size_t size) {
  
  posttime_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:grpc_chat.Response.posttime)
}
inline std::string* Response::_internal_mutable_posttime() {
  
  return posttime_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* Response::release_posttime() {
  // @@protoc_insertion_point(field_release:grpc_chat.Response.posttime)
  return posttime_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void Response::set_allocated_posttime(std::string* posttime) {
  if (posttime != nullptr) {
    
  } else {
    
  }
  posttime_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), posttime,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:grpc_chat.Response.posttime)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace grpc_chat

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_chat_2eproto