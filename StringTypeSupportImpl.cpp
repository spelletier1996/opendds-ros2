/* Generated by opendds_idl version 3.21.0 (ACE version 6.5.18) running on input file ../tests/ROS2/String.idl */
#include "StringTypeSupportImpl.h"

#include <cstring>
#include <stdexcept>
#include "dds/DCPS/BuiltInTopicUtils.h"
#include "dds/DCPS/ContentFilteredTopicImpl.h"
#include "dds/DCPS/DataReaderImpl_T.h"
#include "dds/DCPS/DataWriterImpl_T.h"
#include "dds/DCPS/FilterEvaluator.h"
#include "dds/DCPS/MultiTopicDataReader_T.h"
#include "dds/DCPS/PoolAllocator.h"
#include "dds/DCPS/PublicationInstance.h"
#include "dds/DCPS/PublisherImpl.h"
#include "dds/DCPS/Qos_Helper.h"
#include "dds/DCPS/RakeData.h"
#include "dds/DCPS/RakeResults_T.h"
#include "dds/DCPS/ReceivedDataElementList.h"
#include "dds/DCPS/Registered_Data_Types.h"
#include "dds/DCPS/Service_Participant.h"
#include "dds/DCPS/SubscriberImpl.h"
#include "dds/DCPS/Util.h"
#include "dds/DCPS/XTypes/TypeObject.h"
#include "dds/DCPS/debug.h"
#include "dds/DdsDcpsDomainC.h"


/* Begin MODULE: CORBA */


/* End MODULE: CORBA */


/* Begin MODULE: OpenDDS */


/* End MODULE: OpenDDS */


/* Begin MODULE: std_msgs */



/* Begin MODULE: msg */



/* Begin MODULE: dds_ */



/* Begin STRUCT: String_ */

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> const XTypes::TypeIdentifier& getMinimalTypeIdentifier<std_msgs_msg_dds__String__xtag>()
{
  static XTypes::TypeIdentifier ti;
  ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, TheServiceParticipant->get_static_xtypes_lock(), ti);
  if (ti.kind() == XTypes::TK_NONE) {
    ti = XTypes::TypeIdentifier(XTypes::EK_MINIMAL, XTypes::EquivalenceHashWrapper(89, 101, 109, 8, 10, 185, 38, 163, 51, 166, 157, 38, 156, 177));
  }
  return ti;
}

static const XTypes::TypeMap& get_minimal_type_map();
template<> const XTypes::TypeMap& getMinimalTypeMap<std_msgs_msg_dds__String__xtag>()
{
  return get_minimal_type_map();
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

bool vread(OpenDDS::DCPS::ValueReader& value_reader,  ::std_msgs::msg::dds_::String_& value)
{
  ACE_UNUSED_ARG(value_reader);
  ACE_UNUSED_ARG(value);
  static const ListMemberHelper::Pair pairs[] = {{"data",0},{0,0}};
  ListMemberHelper helper(pairs);
  if (!value_reader.begin_struct()) return false;
  XTypes::MemberId member_id;
  while (value_reader.begin_struct_member(member_id, helper)) {
    switch (member_id) {
    case 0: {
      {
        String x;
        if (!value_reader.read_string(x)) return false;
        value.data() = x;
      }
      break;
    }
    }
    if (!value_reader.end_struct_member()) return false;
  }
  if (!value_reader.end_struct()) return false;
  return true;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

void vwrite(OpenDDS::DCPS::ValueWriter& value_writer, const  ::std_msgs::msg::dds_::String_& value)
{
  ACE_UNUSED_ARG(value_writer);
  ACE_UNUSED_ARG(value);
  value_writer.begin_struct();
  value_writer.begin_struct_member(XTypes::MemberDescriptor("data", false));
  value_writer.write_string(value.data());
  value_writer.end_struct_member();
  value_writer.end_struct();
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<> void set_default( ::std_msgs::msg::dds_::String_& stru)
{
  ACE_UNUSED_ARG(stru);
  stru.data() = "";
}

void serialized_size(const Encoding& encoding, size_t& size, const  ::std_msgs::msg::dds_::String_& stru)
{
  ACE_UNUSED_ARG(encoding);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(stru);
  primitive_serialized_size_ulong(encoding, size);
  size += stru.data().size() + 1;
}

bool operator<<(Serializer& strm, const  ::std_msgs::msg::dds_::String_& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  return (strm << stru.data());
}

bool operator>>(Serializer& strm,  ::std_msgs::msg::dds_::String_& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  return (strm >> stru.data());
}

void serialized_size(const Encoding& encoding, size_t& size, const NestedKeyOnly<const  ::std_msgs::msg::dds_::String_>& stru)
{
  ACE_UNUSED_ARG(encoding);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(stru);
  primitive_serialized_size_ulong(encoding, size);
  size += stru.value.data().size() + 1;
}

bool operator<<(Serializer& strm, const NestedKeyOnly<const  ::std_msgs::msg::dds_::String_>& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  return (strm << stru.value.data());
}

bool operator>>(Serializer& strm, const NestedKeyOnly< ::std_msgs::msg::dds_::String_>& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  return (strm >> stru.value.data());
}

void serialized_size(const Encoding& encoding, size_t& size, const KeyOnly<const  ::std_msgs::msg::dds_::String_>& stru)
{
  ACE_UNUSED_ARG(encoding);
  ACE_UNUSED_ARG(size);
  ACE_UNUSED_ARG(stru);
}

bool operator<<(Serializer& strm, const KeyOnly<const  ::std_msgs::msg::dds_::String_>& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  return true;
}

bool operator>>(Serializer& strm, const KeyOnly< ::std_msgs::msg::dds_::String_>& stru)
{
  ACE_UNUSED_ARG(strm);
  ACE_UNUSED_ARG(stru);
  const Encoding& encoding = strm.encoding();
  ACE_UNUSED_ARG(encoding);
  return true;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL


namespace std_msgs {
namespace msg {
namespace dds_ {
::DDS::DataWriter_ptr String_TypeSupportImpl::create_datawriter()
{
  typedef OpenDDS::DCPS::DataWriterImpl_T<String_> DataWriterImplType;
  ::DDS::DataWriter_ptr writer_impl = ::DDS::DataWriter::_nil();
  ACE_NEW_NORETURN(writer_impl,
                   DataWriterImplType());
  return writer_impl;
}

::DDS::DataReader_ptr String_TypeSupportImpl::create_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<String_> DataReaderImplType;
  ::DDS::DataReader_ptr reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(reader_impl,
                   DataReaderImplType());
  return reader_impl;
}

#ifndef OPENDDS_NO_MULTI_TOPIC
::DDS::DataReader_ptr String_TypeSupportImpl::create_multitopic_datareader()
{
  typedef OpenDDS::DCPS::DataReaderImpl_T<String_> DataReaderImplType;
  typedef OpenDDS::DCPS::MultiTopicDataReader_T<String_, DataReaderImplType> MultiTopicDataReaderImplType;
  ::DDS::DataReader_ptr multitopic_reader_impl = ::DDS::DataReader::_nil();
  ACE_NEW_NORETURN(multitopic_reader_impl,
                   MultiTopicDataReaderImplType());
  return multitopic_reader_impl;
}
#endif /* !OPENDDS_NO_MULTI_TOPIC */

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
const OpenDDS::DCPS::MetaStruct& String_TypeSupportImpl::getMetaStructForType()
{
  return OpenDDS::DCPS::getMetaStruct<String_>();
}
#endif /* !OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE */

bool String_TypeSupportImpl::has_dcps_key()
{
  return TraitsType::gen_has_key();
}

const char* String_TypeSupportImpl::default_type_name() const
{
  return TraitsType::type_name();
}

void String_TypeSupportImpl::representations_allowed_by_type(
  ::DDS::DataRepresentationIdSeq& seq)
{
  MarshalTraitsType::representations_allowed_by_type(seq);
}

const OpenDDS::XTypes::TypeIdentifier& String_TypeSupportImpl::getMinimalTypeIdentifier() const
{
  return OpenDDS::DCPS::getMinimalTypeIdentifier<OpenDDS::DCPS::std_msgs_msg_dds__String__xtag>();
}

const OpenDDS::XTypes::TypeMap& String_TypeSupportImpl::getMinimalTypeMap() const
{
  return OpenDDS::DCPS::getMinimalTypeMap<OpenDDS::DCPS::std_msgs_msg_dds__String__xtag>();
}

const OpenDDS::XTypes::TypeIdentifier& String_TypeSupportImpl::getCompleteTypeIdentifier() const
{
  static OpenDDS::XTypes::TypeIdentifier ti;
  return ti;
}

const OpenDDS::XTypes::TypeMap& String_TypeSupportImpl::getCompleteTypeMap() const
{
  static OpenDDS::XTypes::TypeMap tm;
  return tm;
}

OpenDDS::DCPS::Extensibility String_TypeSupportImpl::getExtensibility() const
{
  return MarshalTraitsType::extensibility();
}

String_TypeSupport::_ptr_type String_TypeSupportImpl::_narrow(CORBA::Object_ptr obj)
{
  return TypeSupportType::_narrow(obj);
}
}
}
}

#ifndef OPENDDS_NO_CONTENT_SUBSCRIPTION_PROFILE
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

template<>
struct MetaStructImpl< ::std_msgs::msg::dds_::String_> : MetaStruct {
  typedef  ::std_msgs::msg::dds_::String_ T;

#ifndef OPENDDS_NO_MULTI_TOPIC
  void* allocate() const { return new T; }

  void deallocate(void* stru) const { delete static_cast<T*>(stru); }

  size_t numDcpsKeys() const { return 0; }

#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool isDcpsKey(const char* field) const
  {
    ACE_UNUSED_ARG(field);
    return false;
  }

  ACE_CDR::ULong map_name_to_id(const char* field) const
  {
    static const std::pair<std::string, ACE_CDR::ULong> name_to_id_pairs[] = {
      std::make_pair("data", 0),
    };
    static const std::map<std::string, ACE_CDR::ULong> name_to_id_map(name_to_id_pairs, name_to_id_pairs + 1);
    std::map<std::string, ACE_CDR::ULong>::const_iterator it = name_to_id_map.find(field);
    if (it == name_to_id_map.end()) {
      throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::std_msgs::msg::dds_::String_)");
    } else {
      return it->second;
    }
  }

  Value getValue(const void* stru, const char* field) const
  {
    const  ::std_msgs::msg::dds_::String_& typed = *static_cast<const  ::std_msgs::msg::dds_::String_*>(stru);
    ACE_UNUSED_ARG(typed);
    if (std::strcmp(field, "data") == 0) {
      return typed.data();
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::std_msgs::msg::dds_::String_)");
  }

  Value getValue(Serializer& strm, const char* field) const
  {
    const Encoding& encoding = strm.encoding();
    ACE_UNUSED_ARG(encoding);
    std::string base_field = field;
    size_t index = base_field.find('.');
    std::string subfield;
    if (index != std::string::npos) {
      subfield = base_field.substr(index + 1);
      base_field = base_field.substr(0, index);
    }
    if (base_field == "data") {
      std::string val;
      if (!(strm >> val)) {
        throw std::runtime_error("Field 'data' could not be deserialized");
      }
      return val;
    } else {
      ACE_CDR::ULong len;
      if (!(strm >> len)) {
        throw std::runtime_error("String 'data' length could not be deserialized");
      }
      if (!strm.skip(len)) {
        throw std::runtime_error("String 'data' contents could not be skipped");
      }
    }
    if (!field[0]) {
      return 0;
    }
    throw std::runtime_error("Did not find field in getValue");
  }

  ComparatorBase::Ptr create_qc_comparator(const char* field, ComparatorBase::Ptr next) const
  {
    ACE_UNUSED_ARG(next);
    if (std::strcmp(field, "data") == 0) {
      return make_field_cmp(&T::_data, next);
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::std_msgs::msg::dds_::String_)");
  }

#ifndef OPENDDS_NO_MULTI_TOPIC
  const char** getFieldNames() const
  {
    static const char* names[] = {"data", 0};
    return names;
  }

  const void* getRawField(const void* stru, const char* field) const
  {
    if (std::strcmp(field, "data") == 0) {
      return &static_cast<const T*>(stru)->_data;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::std_msgs::msg::dds_::String_)");
  }

  void assign(void* lhs, const char* field, const void* rhs,
    const char* rhsFieldSpec, const MetaStruct& rhsMeta) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    ACE_UNUSED_ARG(rhsFieldSpec);
    ACE_UNUSED_ARG(rhsMeta);
    if (std::strcmp(field, "data") == 0) {
      static_cast<T*>(lhs)->_data = *static_cast<const std::string*>(rhsMeta.getRawField(rhs, rhsFieldSpec));
      return;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::std_msgs::msg::dds_::String_)");
  }
#endif /* OPENDDS_NO_MULTI_TOPIC */

  bool compare(const void* lhs, const void* rhs, const char* field) const
  {
    ACE_UNUSED_ARG(lhs);
    ACE_UNUSED_ARG(field);
    ACE_UNUSED_ARG(rhs);
    if (std::strcmp(field, "data") == 0) {
      return static_cast<const T*>(lhs)->_data == static_cast<const T*>(rhs)->_data;
    }
    throw std::runtime_error("Field " + OPENDDS_STRING(field) + " not found or its type is not supported (in struct ::std_msgs::msg::dds_::String_)");
  }
};

template<>
const MetaStruct& getMetaStruct< ::std_msgs::msg::dds_::String_>()
{
  static MetaStructImpl< ::std_msgs::msg::dds_::String_> msi;
  return msi;
}

bool gen_skip_over(Serializer& ser,  ::std_msgs::msg::dds_::String_*)
{
  ACE_UNUSED_ARG(ser);
  MetaStructImpl< ::std_msgs::msg::dds_::String_>().getValue(ser, "");
  return true;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

#endif
namespace std_msgs {
namespace msg {
namespace dds_ {
String_::String_(const std::string& data)
  : _data(data)
{}

void swap(String_& lhs, String_& rhs)
{
  using std::swap;
  swap(lhs._data, rhs._data);
}

}
}
}

/* End STRUCT: String_ */

/* End MODULE: dds_ */

/* End MODULE: msg */

/* End MODULE: std_msgs */
OPENDDS_BEGIN_VERSIONED_NAMESPACE_DECL
namespace OpenDDS { namespace DCPS {

namespace {
XTypes::TypeObject minimal_to0()
{
  const unsigned char to_bytes[] = { 36, 0, 0, 0, 241, 81, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 1, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 1, 0, 112, 0, 141, 119, 127, 56  };
  XTypes::TypeObject to;
  if (!to_type_object(to_bytes, sizeof(to_bytes), to)) {
    throw std::runtime_error("Could not deserialize minimal Type Object 0");
  }
  return to;
}

XTypes::TypeMap get_minimal_type_map_private()
{
  XTypes::TypeMap tm;
  tm[XTypes::TypeIdentifier(XTypes::EK_MINIMAL, XTypes::EquivalenceHashWrapper(89, 101, 109, 8, 10, 185, 38, 163, 51, 166, 157, 38, 156, 177))] = minimal_to0();
  return tm;
}

}

const XTypes::TypeMap& get_minimal_type_map()
{
  static XTypes::TypeMap tm;
  ACE_GUARD_RETURN(ACE_Thread_Mutex, guard, TheServiceParticipant->get_static_xtypes_lock(), tm);
  if (tm.empty()) {
    tm = get_minimal_type_map_private();
  }
  return tm;
}

} }
OPENDDS_END_VERSIONED_NAMESPACE_DECL

