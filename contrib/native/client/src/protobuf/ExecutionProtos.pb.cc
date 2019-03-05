// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ExecutionProtos.proto

#include "ExecutionProtos.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace protobuf_UserBitShared_2eproto {
extern PROTOBUF_INTERNAL_EXPORT_protobuf_UserBitShared_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_QueryId;
}  // namespace protobuf_UserBitShared_2eproto
namespace exec {
namespace bit {
class FragmentHandleDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<FragmentHandle>
      _instance;
} _FragmentHandle_default_instance_;
class ServerPreparedStatementStateDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<ServerPreparedStatementState>
      _instance;
} _ServerPreparedStatementState_default_instance_;
}  // namespace bit
}  // namespace exec
namespace protobuf_ExecutionProtos_2eproto {
static void InitDefaultsFragmentHandle() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::exec::bit::_FragmentHandle_default_instance_;
    new (ptr) ::exec::bit::FragmentHandle();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::exec::bit::FragmentHandle::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_FragmentHandle =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsFragmentHandle}, {
      &protobuf_UserBitShared_2eproto::scc_info_QueryId.base,}};

static void InitDefaultsServerPreparedStatementState() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::exec::bit::_ServerPreparedStatementState_default_instance_;
    new (ptr) ::exec::bit::ServerPreparedStatementState();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::exec::bit::ServerPreparedStatementState::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_ServerPreparedStatementState =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsServerPreparedStatementState}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_FragmentHandle.base);
  ::google::protobuf::internal::InitSCC(&scc_info_ServerPreparedStatementState.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::exec::bit::FragmentHandle, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::exec::bit::FragmentHandle, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::exec::bit::FragmentHandle, query_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::exec::bit::FragmentHandle, major_fragment_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::exec::bit::FragmentHandle, minor_fragment_id_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::exec::bit::FragmentHandle, parent_query_id_),
  0,
  2,
  3,
  1,
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::exec::bit::ServerPreparedStatementState, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::exec::bit::ServerPreparedStatementState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::exec::bit::ServerPreparedStatementState, sql_query_),
  0,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 9, sizeof(::exec::bit::FragmentHandle)},
  { 13, 19, sizeof(::exec::bit::ServerPreparedStatementState)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::exec::bit::_FragmentHandle_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::exec::bit::_ServerPreparedStatementState_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "ExecutionProtos.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\025ExecutionProtos.proto\022\010exec.bit\032\022Coord"
      "ination.proto\032\023UserBitShared.proto\"\235\001\n\016F"
      "ragmentHandle\022&\n\010query_id\030\001 \001(\0132\024.exec.s"
      "hared.QueryId\022\031\n\021major_fragment_id\030\002 \001(\005"
      "\022\031\n\021minor_fragment_id\030\003 \001(\005\022-\n\017parent_qu"
      "ery_id\030\004 \001(\0132\024.exec.shared.QueryId\"1\n\034Se"
      "rverPreparedStatementState\022\021\n\tsql_query\030"
      "\001 \001(\tB+\n\033org.apache.drill.exec.protoB\nEx"
      "ecProtosH\001"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 330);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ExecutionProtos.proto", &protobuf_RegisterTypes);
  ::protobuf_Coordination_2eproto::AddDescriptors();
  ::protobuf_UserBitShared_2eproto::AddDescriptors();
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_ExecutionProtos_2eproto
namespace exec {
namespace bit {

// ===================================================================

void FragmentHandle::InitAsDefaultInstance() {
  ::exec::bit::_FragmentHandle_default_instance_._instance.get_mutable()->query_id_ = const_cast< ::exec::shared::QueryId*>(
      ::exec::shared::QueryId::internal_default_instance());
  ::exec::bit::_FragmentHandle_default_instance_._instance.get_mutable()->parent_query_id_ = const_cast< ::exec::shared::QueryId*>(
      ::exec::shared::QueryId::internal_default_instance());
}
void FragmentHandle::clear_query_id() {
  if (query_id_ != NULL) query_id_->Clear();
  clear_has_query_id();
}
void FragmentHandle::clear_parent_query_id() {
  if (parent_query_id_ != NULL) parent_query_id_->Clear();
  clear_has_parent_query_id();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int FragmentHandle::kQueryIdFieldNumber;
const int FragmentHandle::kMajorFragmentIdFieldNumber;
const int FragmentHandle::kMinorFragmentIdFieldNumber;
const int FragmentHandle::kParentQueryIdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

FragmentHandle::FragmentHandle()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_ExecutionProtos_2eproto::scc_info_FragmentHandle.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:exec.bit.FragmentHandle)
}
FragmentHandle::FragmentHandle(const FragmentHandle& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_query_id()) {
    query_id_ = new ::exec::shared::QueryId(*from.query_id_);
  } else {
    query_id_ = NULL;
  }
  if (from.has_parent_query_id()) {
    parent_query_id_ = new ::exec::shared::QueryId(*from.parent_query_id_);
  } else {
    parent_query_id_ = NULL;
  }
  ::memcpy(&major_fragment_id_, &from.major_fragment_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&minor_fragment_id_) -
    reinterpret_cast<char*>(&major_fragment_id_)) + sizeof(minor_fragment_id_));
  // @@protoc_insertion_point(copy_constructor:exec.bit.FragmentHandle)
}

void FragmentHandle::SharedCtor() {
  ::memset(&query_id_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&minor_fragment_id_) -
      reinterpret_cast<char*>(&query_id_)) + sizeof(minor_fragment_id_));
}

FragmentHandle::~FragmentHandle() {
  // @@protoc_insertion_point(destructor:exec.bit.FragmentHandle)
  SharedDtor();
}

void FragmentHandle::SharedDtor() {
  if (this != internal_default_instance()) delete query_id_;
  if (this != internal_default_instance()) delete parent_query_id_;
}

void FragmentHandle::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* FragmentHandle::descriptor() {
  ::protobuf_ExecutionProtos_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ExecutionProtos_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const FragmentHandle& FragmentHandle::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_ExecutionProtos_2eproto::scc_info_FragmentHandle.base);
  return *internal_default_instance();
}


void FragmentHandle::Clear() {
// @@protoc_insertion_point(message_clear_start:exec.bit.FragmentHandle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(query_id_ != NULL);
      query_id_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(parent_query_id_ != NULL);
      parent_query_id_->Clear();
    }
  }
  if (cached_has_bits & 12u) {
    ::memset(&major_fragment_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&minor_fragment_id_) -
        reinterpret_cast<char*>(&major_fragment_id_)) + sizeof(minor_fragment_id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool FragmentHandle::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:exec.bit.FragmentHandle)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .exec.shared.QueryId query_id = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_query_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 major_fragment_id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(16u /* 16 & 0xFF */)) {
          set_has_major_fragment_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &major_fragment_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional int32 minor_fragment_id = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          set_has_minor_fragment_id();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &minor_fragment_id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .exec.shared.QueryId parent_query_id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(34u /* 34 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_parent_query_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:exec.bit.FragmentHandle)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:exec.bit.FragmentHandle)
  return false;
#undef DO_
}

void FragmentHandle::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:exec.bit.FragmentHandle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .exec.shared.QueryId query_id = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->_internal_query_id(), output);
  }

  // optional int32 major_fragment_id = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->major_fragment_id(), output);
  }

  // optional int32 minor_fragment_id = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->minor_fragment_id(), output);
  }

  // optional .exec.shared.QueryId parent_query_id = 4;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->_internal_parent_query_id(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:exec.bit.FragmentHandle)
}

::google::protobuf::uint8* FragmentHandle::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:exec.bit.FragmentHandle)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .exec.shared.QueryId query_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, this->_internal_query_id(), deterministic, target);
  }

  // optional int32 major_fragment_id = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->major_fragment_id(), target);
  }

  // optional int32 minor_fragment_id = 3;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->minor_fragment_id(), target);
  }

  // optional .exec.shared.QueryId parent_query_id = 4;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        4, this->_internal_parent_query_id(), deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:exec.bit.FragmentHandle)
  return target;
}

size_t FragmentHandle::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:exec.bit.FragmentHandle)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional .exec.shared.QueryId query_id = 1;
    if (has_query_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *query_id_);
    }

    // optional .exec.shared.QueryId parent_query_id = 4;
    if (has_parent_query_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *parent_query_id_);
    }

    // optional int32 major_fragment_id = 2;
    if (has_major_fragment_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->major_fragment_id());
    }

    // optional int32 minor_fragment_id = 3;
    if (has_minor_fragment_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->minor_fragment_id());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FragmentHandle::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:exec.bit.FragmentHandle)
  GOOGLE_DCHECK_NE(&from, this);
  const FragmentHandle* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const FragmentHandle>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:exec.bit.FragmentHandle)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:exec.bit.FragmentHandle)
    MergeFrom(*source);
  }
}

void FragmentHandle::MergeFrom(const FragmentHandle& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:exec.bit.FragmentHandle)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_query_id()->::exec::shared::QueryId::MergeFrom(from.query_id());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_parent_query_id()->::exec::shared::QueryId::MergeFrom(from.parent_query_id());
    }
    if (cached_has_bits & 0x00000004u) {
      major_fragment_id_ = from.major_fragment_id_;
    }
    if (cached_has_bits & 0x00000008u) {
      minor_fragment_id_ = from.minor_fragment_id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void FragmentHandle::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:exec.bit.FragmentHandle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FragmentHandle::CopyFrom(const FragmentHandle& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:exec.bit.FragmentHandle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FragmentHandle::IsInitialized() const {
  return true;
}

void FragmentHandle::Swap(FragmentHandle* other) {
  if (other == this) return;
  InternalSwap(other);
}
void FragmentHandle::InternalSwap(FragmentHandle* other) {
  using std::swap;
  swap(query_id_, other->query_id_);
  swap(parent_query_id_, other->parent_query_id_);
  swap(major_fragment_id_, other->major_fragment_id_);
  swap(minor_fragment_id_, other->minor_fragment_id_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata FragmentHandle::GetMetadata() const {
  protobuf_ExecutionProtos_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ExecutionProtos_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void ServerPreparedStatementState::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ServerPreparedStatementState::kSqlQueryFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ServerPreparedStatementState::ServerPreparedStatementState()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_ExecutionProtos_2eproto::scc_info_ServerPreparedStatementState.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:exec.bit.ServerPreparedStatementState)
}
ServerPreparedStatementState::ServerPreparedStatementState(const ServerPreparedStatementState& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  sql_query_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_sql_query()) {
    sql_query_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sql_query_);
  }
  // @@protoc_insertion_point(copy_constructor:exec.bit.ServerPreparedStatementState)
}

void ServerPreparedStatementState::SharedCtor() {
  sql_query_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

ServerPreparedStatementState::~ServerPreparedStatementState() {
  // @@protoc_insertion_point(destructor:exec.bit.ServerPreparedStatementState)
  SharedDtor();
}

void ServerPreparedStatementState::SharedDtor() {
  sql_query_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void ServerPreparedStatementState::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* ServerPreparedStatementState::descriptor() {
  ::protobuf_ExecutionProtos_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ExecutionProtos_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const ServerPreparedStatementState& ServerPreparedStatementState::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_ExecutionProtos_2eproto::scc_info_ServerPreparedStatementState.base);
  return *internal_default_instance();
}


void ServerPreparedStatementState::Clear() {
// @@protoc_insertion_point(message_clear_start:exec.bit.ServerPreparedStatementState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    sql_query_.ClearNonDefaultToEmptyNoArena();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool ServerPreparedStatementState::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:exec.bit.ServerPreparedStatementState)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string sql_query = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_sql_query()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->sql_query().data(), static_cast<int>(this->sql_query().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "exec.bit.ServerPreparedStatementState.sql_query");
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:exec.bit.ServerPreparedStatementState)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:exec.bit.ServerPreparedStatementState)
  return false;
#undef DO_
}

void ServerPreparedStatementState::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:exec.bit.ServerPreparedStatementState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string sql_query = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sql_query().data(), static_cast<int>(this->sql_query().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "exec.bit.ServerPreparedStatementState.sql_query");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->sql_query(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:exec.bit.ServerPreparedStatementState)
}

::google::protobuf::uint8* ServerPreparedStatementState::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:exec.bit.ServerPreparedStatementState)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string sql_query = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->sql_query().data(), static_cast<int>(this->sql_query().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "exec.bit.ServerPreparedStatementState.sql_query");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->sql_query(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:exec.bit.ServerPreparedStatementState)
  return target;
}

size_t ServerPreparedStatementState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:exec.bit.ServerPreparedStatementState)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  // optional string sql_query = 1;
  if (has_sql_query()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->sql_query());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ServerPreparedStatementState::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:exec.bit.ServerPreparedStatementState)
  GOOGLE_DCHECK_NE(&from, this);
  const ServerPreparedStatementState* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ServerPreparedStatementState>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:exec.bit.ServerPreparedStatementState)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:exec.bit.ServerPreparedStatementState)
    MergeFrom(*source);
  }
}

void ServerPreparedStatementState::MergeFrom(const ServerPreparedStatementState& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:exec.bit.ServerPreparedStatementState)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_sql_query()) {
    set_has_sql_query();
    sql_query_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.sql_query_);
  }
}

void ServerPreparedStatementState::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:exec.bit.ServerPreparedStatementState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerPreparedStatementState::CopyFrom(const ServerPreparedStatementState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:exec.bit.ServerPreparedStatementState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerPreparedStatementState::IsInitialized() const {
  return true;
}

void ServerPreparedStatementState::Swap(ServerPreparedStatementState* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ServerPreparedStatementState::InternalSwap(ServerPreparedStatementState* other) {
  using std::swap;
  sql_query_.Swap(&other->sql_query_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata ServerPreparedStatementState::GetMetadata() const {
  protobuf_ExecutionProtos_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_ExecutionProtos_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace bit
}  // namespace exec
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::exec::bit::FragmentHandle* Arena::CreateMaybeMessage< ::exec::bit::FragmentHandle >(Arena* arena) {
  return Arena::CreateInternal< ::exec::bit::FragmentHandle >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::exec::bit::ServerPreparedStatementState* Arena::CreateMaybeMessage< ::exec::bit::ServerPreparedStatementState >(Arena* arena) {
  return Arena::CreateInternal< ::exec::bit::ServerPreparedStatementState >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
