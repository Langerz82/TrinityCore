// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: global_extensions/range.proto

#ifndef PROTOBUF_global_5fextensions_2frange_2eproto__INCLUDED
#define PROTOBUF_global_5fextensions_2frange_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
#include "Define.h" // for TC_PROTO_API
// @@protoc_insertion_point(includes)

namespace bgs {
namespace protocol {

// Internal implementation detail -- do not call these.
void TC_PROTO_API protobuf_AddDesc_global_5fextensions_2frange_2eproto();
void protobuf_AssignDesc_global_5fextensions_2frange_2eproto();
void protobuf_ShutdownFile_global_5fextensions_2frange_2eproto();

class UnsignedIntRange;
class SignedIntRange;
class FloatRange;

// ===================================================================

class TC_PROTO_API UnsignedIntRange : public ::google::protobuf::Message {
 public:
  UnsignedIntRange();
  virtual ~UnsignedIntRange();

  UnsignedIntRange(const UnsignedIntRange& from);

  inline UnsignedIntRange& operator=(const UnsignedIntRange& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const UnsignedIntRange& default_instance();

  void Swap(UnsignedIntRange* other);

  // implements Message ----------------------------------------------

  UnsignedIntRange* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const UnsignedIntRange& from);
  void MergeFrom(const UnsignedIntRange& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 min = 1;
  inline bool has_min() const;
  inline void clear_min();
  static const int kMinFieldNumber = 1;
  inline ::google::protobuf::uint64 min() const;
  inline void set_min(::google::protobuf::uint64 value);

  // optional uint64 max = 2;
  inline bool has_max() const;
  inline void clear_max();
  static const int kMaxFieldNumber = 2;
  inline ::google::protobuf::uint64 max() const;
  inline void set_max(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:bgs.protocol.UnsignedIntRange)
 private:
  inline void set_has_min();
  inline void clear_has_min();
  inline void set_has_max();
  inline void clear_has_max();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint64 min_;
  ::google::protobuf::uint64 max_;
  friend void TC_PROTO_API protobuf_AddDesc_global_5fextensions_2frange_2eproto();
  friend void protobuf_AssignDesc_global_5fextensions_2frange_2eproto();
  friend void protobuf_ShutdownFile_global_5fextensions_2frange_2eproto();

  void InitAsDefaultInstance();
  static UnsignedIntRange* default_instance_;
};
// -------------------------------------------------------------------

class TC_PROTO_API SignedIntRange : public ::google::protobuf::Message {
 public:
  SignedIntRange();
  virtual ~SignedIntRange();

  SignedIntRange(const SignedIntRange& from);

  inline SignedIntRange& operator=(const SignedIntRange& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SignedIntRange& default_instance();

  void Swap(SignedIntRange* other);

  // implements Message ----------------------------------------------

  SignedIntRange* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SignedIntRange& from);
  void MergeFrom(const SignedIntRange& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 min = 1;
  inline bool has_min() const;
  inline void clear_min();
  static const int kMinFieldNumber = 1;
  inline ::google::protobuf::int64 min() const;
  inline void set_min(::google::protobuf::int64 value);

  // optional int64 max = 2;
  inline bool has_max() const;
  inline void clear_max();
  static const int kMaxFieldNumber = 2;
  inline ::google::protobuf::int64 max() const;
  inline void set_max(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:bgs.protocol.SignedIntRange)
 private:
  inline void set_has_min();
  inline void clear_has_min();
  inline void set_has_max();
  inline void clear_has_max();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 min_;
  ::google::protobuf::int64 max_;
  friend void TC_PROTO_API protobuf_AddDesc_global_5fextensions_2frange_2eproto();
  friend void protobuf_AssignDesc_global_5fextensions_2frange_2eproto();
  friend void protobuf_ShutdownFile_global_5fextensions_2frange_2eproto();

  void InitAsDefaultInstance();
  static SignedIntRange* default_instance_;
};
// -------------------------------------------------------------------

class TC_PROTO_API FloatRange : public ::google::protobuf::Message {
 public:
  FloatRange();
  virtual ~FloatRange();

  FloatRange(const FloatRange& from);

  inline FloatRange& operator=(const FloatRange& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const FloatRange& default_instance();

  void Swap(FloatRange* other);

  // implements Message ----------------------------------------------

  FloatRange* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const FloatRange& from);
  void MergeFrom(const FloatRange& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional float min = 1;
  inline bool has_min() const;
  inline void clear_min();
  static const int kMinFieldNumber = 1;
  inline float min() const;
  inline void set_min(float value);

  // optional float max = 2;
  inline bool has_max() const;
  inline void clear_max();
  static const int kMaxFieldNumber = 2;
  inline float max() const;
  inline void set_max(float value);

  // @@protoc_insertion_point(class_scope:bgs.protocol.FloatRange)
 private:
  inline void set_has_min();
  inline void clear_has_min();
  inline void set_has_max();
  inline void clear_has_max();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  float min_;
  float max_;
  friend void TC_PROTO_API protobuf_AddDesc_global_5fextensions_2frange_2eproto();
  friend void protobuf_AssignDesc_global_5fextensions_2frange_2eproto();
  friend void protobuf_ShutdownFile_global_5fextensions_2frange_2eproto();

  void InitAsDefaultInstance();
  static FloatRange* default_instance_;
};
// ===================================================================


// ===================================================================


// ===================================================================

// UnsignedIntRange

// optional uint64 min = 1;
inline bool UnsignedIntRange::has_min() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void UnsignedIntRange::set_has_min() {
  _has_bits_[0] |= 0x00000001u;
}
inline void UnsignedIntRange::clear_has_min() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void UnsignedIntRange::clear_min() {
  min_ = GOOGLE_ULONGLONG(0);
  clear_has_min();
}
inline ::google::protobuf::uint64 UnsignedIntRange::min() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.UnsignedIntRange.min)
  return min_;
}
inline void UnsignedIntRange::set_min(::google::protobuf::uint64 value) {
  set_has_min();
  min_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.UnsignedIntRange.min)
}

// optional uint64 max = 2;
inline bool UnsignedIntRange::has_max() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void UnsignedIntRange::set_has_max() {
  _has_bits_[0] |= 0x00000002u;
}
inline void UnsignedIntRange::clear_has_max() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void UnsignedIntRange::clear_max() {
  max_ = GOOGLE_ULONGLONG(0);
  clear_has_max();
}
inline ::google::protobuf::uint64 UnsignedIntRange::max() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.UnsignedIntRange.max)
  return max_;
}
inline void UnsignedIntRange::set_max(::google::protobuf::uint64 value) {
  set_has_max();
  max_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.UnsignedIntRange.max)
}

// -------------------------------------------------------------------

// SignedIntRange

// optional int64 min = 1;
inline bool SignedIntRange::has_min() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void SignedIntRange::set_has_min() {
  _has_bits_[0] |= 0x00000001u;
}
inline void SignedIntRange::clear_has_min() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void SignedIntRange::clear_min() {
  min_ = GOOGLE_LONGLONG(0);
  clear_has_min();
}
inline ::google::protobuf::int64 SignedIntRange::min() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.SignedIntRange.min)
  return min_;
}
inline void SignedIntRange::set_min(::google::protobuf::int64 value) {
  set_has_min();
  min_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.SignedIntRange.min)
}

// optional int64 max = 2;
inline bool SignedIntRange::has_max() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void SignedIntRange::set_has_max() {
  _has_bits_[0] |= 0x00000002u;
}
inline void SignedIntRange::clear_has_max() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void SignedIntRange::clear_max() {
  max_ = GOOGLE_LONGLONG(0);
  clear_has_max();
}
inline ::google::protobuf::int64 SignedIntRange::max() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.SignedIntRange.max)
  return max_;
}
inline void SignedIntRange::set_max(::google::protobuf::int64 value) {
  set_has_max();
  max_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.SignedIntRange.max)
}

// -------------------------------------------------------------------

// FloatRange

// optional float min = 1;
inline bool FloatRange::has_min() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void FloatRange::set_has_min() {
  _has_bits_[0] |= 0x00000001u;
}
inline void FloatRange::clear_has_min() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void FloatRange::clear_min() {
  min_ = 0;
  clear_has_min();
}
inline float FloatRange::min() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.FloatRange.min)
  return min_;
}
inline void FloatRange::set_min(float value) {
  set_has_min();
  min_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.FloatRange.min)
}

// optional float max = 2;
inline bool FloatRange::has_max() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void FloatRange::set_has_max() {
  _has_bits_[0] |= 0x00000002u;
}
inline void FloatRange::clear_has_max() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void FloatRange::clear_max() {
  max_ = 0;
  clear_has_max();
}
inline float FloatRange::max() const {
  // @@protoc_insertion_point(field_get:bgs.protocol.FloatRange.max)
  return max_;
}
inline void FloatRange::set_max(float value) {
  set_has_max();
  max_ = value;
  // @@protoc_insertion_point(field_set:bgs.protocol.FloatRange.max)
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol
}  // namespace bgs

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_global_5fextensions_2frange_2eproto__INCLUDED