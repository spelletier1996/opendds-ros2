// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v2.5.18
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       https://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     https://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_codegen.cpp:148

#ifndef _TAO_IDL__HOME_SEB_GITHUB_MODULE_GC_BUILD_TESTS_ROS2_STRINGTYPESUPPORTC_H_
#define _TAO_IDL__HOME_SEB_GITHUB_MODULE_GC_BUILD_TESTS_ROS2_STRINGTYPESUPPORTC_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types_IDLv4.h"
TAO_BEGIN_VERSIONED_NAMESPACE_DECL

namespace CORBA
{
  using namespace IDLv4;
}

TAO_END_VERSIONED_NAMESPACE_DECL

#include "tao/ORB_Constants.h"
#include "dds/DCPS/ZeroCopyInfoSeq_T.h"
#include "dds/DCPS/ZeroCopySeq_T.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Sequence_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Seq_Var_T.h"
#include "tao/Seq_Out_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "StringC.h"
#include "dds/DdsDcpsInfrastructureC.h"
#include "dds/DdsDcpsPublicationC.h"
#include "dds/DdsDcpsSubscriptionExtC.h"
#include "dds/DdsDcpsTopicC.h"
#include "dds/DdsDcpsTypeSupportExtC.h"

#if TAO_MAJOR_VERSION != 2 || TAO_MINOR_VERSION != 5 || TAO_MICRO_VERSION != 18
#error This file should be regenerated with TAO_IDL
#endif
// TAO_IDL - Generated from
// /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace std_msgs
{
  // TAO_IDL - Generated from
  // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

  namespace msg
  {
    // TAO_IDL - Generated from
    // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

    namespace dds_
    {

      
      // TAO_IDL - Generated from
      // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_sequence/sequence_ch.cpp:98

      

      typedef ::TAO::DCPS::ZeroCopyDataSeq< std_msgs::msg::dds_::String_, DCPS_ZERO_COPY_SEQ_DEFAULT_SIZE> String_Seq;
      
      // TAO_IDL - Generated from
      // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_interface.cpp:747

      

#if !defined (_STD_MSGS_MSG_DDS__STRING_TYPESUPPORT__VAR_OUT_CH_)
#define _STD_MSGS_MSG_DDS__STRING_TYPESUPPORT__VAR_OUT_CH_

      class String_TypeSupport;
      typedef String_TypeSupport *String_TypeSupport_ptr;
      typedef TAO_Objref_Var_T<String_TypeSupport> String_TypeSupport_var;
      typedef TAO_Objref_Out_T<String_TypeSupport> String_TypeSupport_out;
      

#endif /* end #if !defined */

      
      // TAO_IDL - Generated from
      // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

      

      class  String_TypeSupport
        : public virtual ::OpenDDS::DCPS::TypeSupport
      
      {
      public:
        // TAO_IDL - Generated from
        // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_type.cpp:301

        typedef String_TypeSupport_ptr _ptr_type;
        typedef String_TypeSupport_var _var_type;
        typedef String_TypeSupport_out _out_type;

        // The static operations.
        static String_TypeSupport_ptr _duplicate (String_TypeSupport_ptr obj);

        static void _tao_release (String_TypeSupport_ptr obj);

        static String_TypeSupport_ptr _narrow (::CORBA::Object_ptr obj);
        static String_TypeSupport_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
        static String_TypeSupport_ptr _nil (void);

        
        // TAO_IDL - Generated from
        // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

        

        virtual ::CORBA::Boolean _is_a (const char *type_id);
        virtual const char* _interface_repository_id (void) const;
        virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
      
      protected:
        // Abstract or local interface only.
        String_TypeSupport (void);

        

        virtual ~String_TypeSupport (void);
      
      private:
        // Private and unimplemented for concrete interfaces.
        ACE_UNIMPLEMENTED_FUNC (String_TypeSupport (const String_TypeSupport &))
#if defined (ACE_HAS_CPP11)
        ACE_UNIMPLEMENTED_FUNC (String_TypeSupport (String_TypeSupport &&))
#endif /* ACE_HAS_CPP11 */
        ACE_UNIMPLEMENTED_FUNC (String_TypeSupport &operator= (const String_TypeSupport &))
#if defined (ACE_HAS_CPP11)
        ACE_UNIMPLEMENTED_FUNC (String_TypeSupport &operator= (String_TypeSupport &&))
#endif /* ACE_HAS_CPP11 */
      };
      // TAO_IDL - Generated from
      // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_interface.cpp:747

      

#if !defined (_STD_MSGS_MSG_DDS__STRING_DATAWRITER__VAR_OUT_CH_)
#define _STD_MSGS_MSG_DDS__STRING_DATAWRITER__VAR_OUT_CH_

      class String_DataWriter;
      typedef String_DataWriter *String_DataWriter_ptr;
      typedef TAO_Objref_Var_T<String_DataWriter> String_DataWriter_var;
      typedef TAO_Objref_Out_T<String_DataWriter> String_DataWriter_out;
      

#endif /* end #if !defined */

      
      // TAO_IDL - Generated from
      // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

      

      class  String_DataWriter
        : public virtual ::DDS::DataWriter
      
      {
      public:
        // TAO_IDL - Generated from
        // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_type.cpp:301

        typedef String_DataWriter_ptr _ptr_type;
        typedef String_DataWriter_var _var_type;
        typedef String_DataWriter_out _out_type;

        // The static operations.
        static String_DataWriter_ptr _duplicate (String_DataWriter_ptr obj);

        static void _tao_release (String_DataWriter_ptr obj);

        static String_DataWriter_ptr _narrow (::CORBA::Object_ptr obj);
        static String_DataWriter_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
        static String_DataWriter_ptr _nil (void);

        virtual ::DDS::InstanceHandle_t register_instance (
          const ::std_msgs::msg::dds_::String_ & instance) = 0;

        virtual ::DDS::InstanceHandle_t register_instance_w_timestamp (
          const ::std_msgs::msg::dds_::String_ & instance,
          const ::DDS::Time_t & timestamp) = 0;

        virtual ::DDS::ReturnCode_t unregister_instance (
          const ::std_msgs::msg::dds_::String_ & instance,
          ::DDS::InstanceHandle_t handle) = 0;

        virtual ::DDS::ReturnCode_t unregister_instance_w_timestamp (
          const ::std_msgs::msg::dds_::String_ & instance,
          ::DDS::InstanceHandle_t handle,
          const ::DDS::Time_t & timestamp) = 0;

        virtual ::DDS::ReturnCode_t write (
          const ::std_msgs::msg::dds_::String_ & instance_data,
          ::DDS::InstanceHandle_t handle) = 0;

        virtual ::DDS::ReturnCode_t write_w_timestamp (
          const ::std_msgs::msg::dds_::String_ & instance_data,
          ::DDS::InstanceHandle_t handle,
          const ::DDS::Time_t & source_timestamp) = 0;

        virtual ::DDS::ReturnCode_t dispose (
          const ::std_msgs::msg::dds_::String_ & instance_data,
          ::DDS::InstanceHandle_t instance_handle) = 0;

        virtual ::DDS::ReturnCode_t dispose_w_timestamp (
          const ::std_msgs::msg::dds_::String_ & instance_data,
          ::DDS::InstanceHandle_t instance_handle,
          const ::DDS::Time_t & source_timestamp) = 0;

        virtual ::DDS::ReturnCode_t get_key_value (
          ::std_msgs::msg::dds_::String_ & key_holder,
          ::DDS::InstanceHandle_t handle) = 0;

        virtual ::DDS::InstanceHandle_t lookup_instance (
          const ::std_msgs::msg::dds_::String_ & instance_data) = 0;

        
        // TAO_IDL - Generated from
        // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

        

        virtual ::CORBA::Boolean _is_a (const char *type_id);
        virtual const char* _interface_repository_id (void) const;
        virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
      
      protected:
        // Abstract or local interface only.
        String_DataWriter (void);

        

        virtual ~String_DataWriter (void);
      
      private:
        // Private and unimplemented for concrete interfaces.
        ACE_UNIMPLEMENTED_FUNC (String_DataWriter (const String_DataWriter &))
#if defined (ACE_HAS_CPP11)
        ACE_UNIMPLEMENTED_FUNC (String_DataWriter (String_DataWriter &&))
#endif /* ACE_HAS_CPP11 */
        ACE_UNIMPLEMENTED_FUNC (String_DataWriter &operator= (const String_DataWriter &))
#if defined (ACE_HAS_CPP11)
        ACE_UNIMPLEMENTED_FUNC (String_DataWriter &operator= (String_DataWriter &&))
#endif /* ACE_HAS_CPP11 */
      };
      // TAO_IDL - Generated from
      // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_interface.cpp:747

      

#if !defined (_STD_MSGS_MSG_DDS__STRING_DATAREADER__VAR_OUT_CH_)
#define _STD_MSGS_MSG_DDS__STRING_DATAREADER__VAR_OUT_CH_

      class String_DataReader;
      typedef String_DataReader *String_DataReader_ptr;
      typedef TAO_Objref_Var_T<String_DataReader> String_DataReader_var;
      typedef TAO_Objref_Out_T<String_DataReader> String_DataReader_out;
      

#endif /* end #if !defined */

      
      // TAO_IDL - Generated from
      // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

      

      class  String_DataReader
        : public virtual ::OpenDDS::DCPS::DataReaderEx
      
      {
      public:
        // TAO_IDL - Generated from
        // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_type.cpp:301

        typedef String_DataReader_ptr _ptr_type;
        typedef String_DataReader_var _var_type;
        typedef String_DataReader_out _out_type;

        // The static operations.
        static String_DataReader_ptr _duplicate (String_DataReader_ptr obj);

        static void _tao_release (String_DataReader_ptr obj);

        static String_DataReader_ptr _narrow (::CORBA::Object_ptr obj);
        static String_DataReader_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
        static String_DataReader_ptr _nil (void);

        virtual ::DDS::ReturnCode_t read (
          ::std_msgs::msg::dds_::String_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t take (
          ::std_msgs::msg::dds_::String_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t read_w_condition (
          ::std_msgs::msg::dds_::String_Seq & data_values,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t take_w_condition (
          ::std_msgs::msg::dds_::String_Seq & data_values,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t read_next_sample (
          ::std_msgs::msg::dds_::String_ & received_data,
          ::DDS::SampleInfo & sample_info) = 0;

        virtual ::DDS::ReturnCode_t take_next_sample (
          ::std_msgs::msg::dds_::String_ & received_data,
          ::DDS::SampleInfo & sample_info) = 0;

        virtual ::DDS::ReturnCode_t read_instance (
          ::std_msgs::msg::dds_::String_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t take_instance (
          ::std_msgs::msg::dds_::String_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t read_instance_w_condition (
          ::std_msgs::msg::dds_::String_Seq & received_data,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t take_instance_w_condition (
          ::std_msgs::msg::dds_::String_Seq & received_data,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t read_next_instance (
          ::std_msgs::msg::dds_::String_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t take_next_instance (
          ::std_msgs::msg::dds_::String_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t a_handle,
          ::DDS::SampleStateMask sample_states,
          ::DDS::ViewStateMask view_states,
          ::DDS::InstanceStateMask instance_states) = 0;

        virtual ::DDS::ReturnCode_t read_next_instance_w_condition (
          ::std_msgs::msg::dds_::String_Seq & data_values,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t previous_handle,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t take_next_instance_w_condition (
          ::std_msgs::msg::dds_::String_Seq & data_values,
          ::DDS::SampleInfoSeq & sample_infos,
          ::CORBA::Long max_samples,
          ::DDS::InstanceHandle_t previous_handle,
          ::DDS::ReadCondition_ptr a_condition) = 0;

        virtual ::DDS::ReturnCode_t return_loan (
          ::std_msgs::msg::dds_::String_Seq & received_data,
          ::DDS::SampleInfoSeq & info_seq) = 0;

        virtual ::DDS::ReturnCode_t get_key_value (
          ::std_msgs::msg::dds_::String_ & key_holder,
          ::DDS::InstanceHandle_t handle) = 0;

        virtual ::DDS::InstanceHandle_t lookup_instance (
          const ::std_msgs::msg::dds_::String_ & instance_data) = 0;

        
        // TAO_IDL - Generated from
        // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

        

        virtual ::CORBA::Boolean _is_a (const char *type_id);
        virtual const char* _interface_repository_id (void) const;
        virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
      
      protected:
        // Abstract or local interface only.
        String_DataReader (void);

        

        virtual ~String_DataReader (void);
      
      private:
        // Private and unimplemented for concrete interfaces.
        ACE_UNIMPLEMENTED_FUNC (String_DataReader (const String_DataReader &))
#if defined (ACE_HAS_CPP11)
        ACE_UNIMPLEMENTED_FUNC (String_DataReader (String_DataReader &&))
#endif /* ACE_HAS_CPP11 */
        ACE_UNIMPLEMENTED_FUNC (String_DataReader &operator= (const String_DataReader &))
#if defined (ACE_HAS_CPP11)
        ACE_UNIMPLEMENTED_FUNC (String_DataReader &operator= (String_DataReader &&))
#endif /* ACE_HAS_CPP11 */
      };
    
    
    // TAO_IDL - Generated from
    // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62

    
    } // module std_msgs::msg::dds_
  
  
  // TAO_IDL - Generated from
  // /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62

  
  } // module std_msgs::msg


// TAO_IDL - Generated from
// /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module std_msgs
// TAO_IDL - Generated from
// /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:64



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_visitor_traits.cpp:58



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_STD_MSGS_MSG_DDS__STRING_TYPESUPPORT__TRAITS_)
#define _STD_MSGS_MSG_DDS__STRING_TYPESUPPORT__TRAITS_

  template<>
  struct  Objref_Traits< ::std_msgs::msg::dds_::String_TypeSupport>
  {
    static ::std_msgs::msg::dds_::String_TypeSupport_ptr duplicate (
        ::std_msgs::msg::dds_::String_TypeSupport_ptr p);
    static void release (
        ::std_msgs::msg::dds_::String_TypeSupport_ptr p);
    static ::std_msgs::msg::dds_::String_TypeSupport_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::std_msgs::msg::dds_::String_TypeSupport_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_STD_MSGS_MSG_DDS__STRING_DATAWRITER__TRAITS_)
#define _STD_MSGS_MSG_DDS__STRING_DATAWRITER__TRAITS_

  template<>
  struct  Objref_Traits< ::std_msgs::msg::dds_::String_DataWriter>
  {
    static ::std_msgs::msg::dds_::String_DataWriter_ptr duplicate (
        ::std_msgs::msg::dds_::String_DataWriter_ptr p);
    static void release (
        ::std_msgs::msg::dds_::String_DataWriter_ptr p);
    static ::std_msgs::msg::dds_::String_DataWriter_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::std_msgs::msg::dds_::String_DataWriter_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */

#if !defined (_STD_MSGS_MSG_DDS__STRING_DATAREADER__TRAITS_)
#define _STD_MSGS_MSG_DDS__STRING_DATAREADER__TRAITS_

  template<>
  struct  Objref_Traits< ::std_msgs::msg::dds_::String_DataReader>
  {
    static ::std_msgs::msg::dds_::String_DataReader_ptr duplicate (
        ::std_msgs::msg::dds_::String_DataReader_ptr p);
    static void release (
        ::std_msgs::msg::dds_::String_DataReader_ptr p);
    static ::std_msgs::msg::dds_::String_DataReader_ptr nil (void);
    static ::CORBA::Boolean marshal (
        const ::std_msgs::msg::dds_::String_DataReader_ptr p,
        TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /tmp/OpenDDS/ACE_TAO/TAO/TAO_IDL/be/be_codegen.cpp:1649

#if defined (__ACE_INLINE__)
#include "StringTypeSupportC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

