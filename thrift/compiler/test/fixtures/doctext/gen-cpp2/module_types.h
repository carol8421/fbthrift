/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include <thrift/lib/cpp2/GeneratedHeaderHelper.h>
#include <thrift/lib/cpp2/Thrift.h>
#include <thrift/lib/cpp2/gen/module_types_h.h>
#include <thrift/lib/cpp2/protocol/Protocol.h>


// BEGIN declare_enums
namespace cpp2 {

enum class B {
  HELLO = 0
};

using _B_EnumMapFactory = apache::thrift::detail::TEnumMapFactory<B, B>;
extern const _B_EnumMapFactory::ValuesToNamesMapType _B_VALUES_TO_NAMES;
extern const _B_EnumMapFactory::NamesToValuesMapType _B_NAMES_TO_VALUES;



} // cpp2
namespace std {


template<> struct hash<typename  ::cpp2::B> : public apache::thrift::detail::enum_hash<typename  ::cpp2::B> {};
template<> struct equal_to<typename  ::cpp2::B> : public apache::thrift::detail::enum_equal_to<typename  ::cpp2::B> {};


} // std

namespace apache { namespace thrift {


template <> struct TEnumDataStorage< ::cpp2::B>;
#ifndef _MSC_VER
template <> const std::size_t TEnumTraits< ::cpp2::B>::size;
template <> const folly::Range<const  ::cpp2::B*> TEnumTraits< ::cpp2::B>::values;
template <> const folly::Range<const folly::StringPiece*> TEnumTraits< ::cpp2::B>::names;
#endif
template <> const char* TEnumTraits< ::cpp2::B>::findName( ::cpp2::B value);
template <> bool TEnumTraits< ::cpp2::B>::findValue(const char* name,  ::cpp2::B* outValue);

template <> inline constexpr  ::cpp2::B TEnumTraits< ::cpp2::B>::min() {
  return  ::cpp2::B::HELLO;
}

template <> inline constexpr  ::cpp2::B TEnumTraits< ::cpp2::B>::max() {
  return  ::cpp2::B::HELLO;
}


}} // apache::thrift


// END declare_enums
// BEGIN struct_indirection

// END struct_indirection
// BEGIN forward_declare
namespace cpp2 {
class A;
} // cpp2
// END forward_declare
// BEGIN typedefs

// END typedefs
// BEGIN hash_and_equal_to
// END hash_and_equal_to
namespace cpp2 {
class A final : private apache::thrift::detail::st::ComparisonOperators<A> {
 public:

  A() :
      useless_field(0) {}
  // FragileConstructor for use in initialization lists only.
  A(apache::thrift::FragileConstructor, int32_t useless_field__arg);
  template <typename _T>
  void __set_field(::apache::thrift::detail::argument_wrapper<1, _T> arg) {
    useless_field = arg.extract();
    __isset.useless_field = true;
  }

  A(A&&) = default;

  A(const A&) = default;

  A& operator=(A&&) = default;

  A& operator=(const A&) = default;
  void __clear();
  int32_t useless_field;

  struct __isset {
    bool useless_field;
  } __isset = {};
  bool operator==(const A& rhs) const;
  bool operator<(const A& rhs) const;

  int32_t get_useless_field() const {
    return useless_field;
  }

  int32_t& set_useless_field(int32_t useless_field_) {
    useless_field = useless_field_;
    __isset.useless_field = true;
    return useless_field;
  }

  template <class Protocol_>
  uint32_t read(Protocol_* iprot);
  template <class Protocol_>
  uint32_t serializedSize(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t serializedSizeZC(Protocol_ const* prot_) const;
  template <class Protocol_>
  uint32_t write(Protocol_* prot_) const;

 private:
  template <class Protocol_>
  void readNoXfer(Protocol_* iprot);

  friend class ::apache::thrift::Cpp2Ops< A >;
};

void swap(A& a, A& b);
extern template void A::readNoXfer<>(apache::thrift::BinaryProtocolReader*);
extern template uint32_t A::write<>(apache::thrift::BinaryProtocolWriter*) const;
extern template uint32_t A::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template uint32_t A::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
extern template void A::readNoXfer<>(apache::thrift::CompactProtocolReader*);
extern template uint32_t A::write<>(apache::thrift::CompactProtocolWriter*) const;
extern template uint32_t A::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
extern template uint32_t A::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

template <class Protocol_>
uint32_t A::read(Protocol_* iprot) {
  auto _xferStart = iprot->getCurrentPosition().getCurrentPosition();
  readNoXfer(iprot);
  return iprot->getCurrentPosition().getCurrentPosition() - _xferStart;
}

} // cpp2
namespace apache { namespace thrift {

template <> inline void Cpp2Ops< ::cpp2::A>::clear( ::cpp2::A* obj) {
  return obj->__clear();
}

template <> inline constexpr apache::thrift::protocol::TType Cpp2Ops< ::cpp2::A>::thriftType() {
  return apache::thrift::protocol::T_STRUCT;
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::A>::write(Protocol* proto,  ::cpp2::A const* obj) {
  return obj->write(proto);
}

template <> template <class Protocol> void Cpp2Ops< ::cpp2::A>::read(Protocol* proto,  ::cpp2::A* obj) {
  return obj->readNoXfer(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::A>::serializedSize(Protocol const* proto,  ::cpp2::A const* obj) {
  return obj->serializedSize(proto);
}

template <> template <class Protocol> uint32_t Cpp2Ops< ::cpp2::A>::serializedSizeZC(Protocol const* proto,  ::cpp2::A const* obj) {
  return obj->serializedSizeZC(proto);
}

}} // apache::thrift
