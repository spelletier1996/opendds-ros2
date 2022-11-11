// #include <dds/DdsDcpsInfrastructureC.h>
// #include <dds/DdsDcpsTopicC.h>

#include "StringTypeSupportImpl.h"
#include <ace/OS_NS_unistd.h>
#include <ace/streams.h>
#include <dds/DCPS/Marked_Default_Qos.h>
#include <dds/DCPS/PublisherImpl.h>
#include <dds/DCPS/Service_Participant.h>
#include <orbsvcs/Time_Utilities.h>

#include "dds/DCPS/StaticIncludes.h"

int main(void) {

  TheServiceParticipant->default_configuration_file("dds.ini");
  auto dpf = TheServiceParticipant->get_domain_participant_factory();

  DDS::DomainParticipant_var participant = dpf->create_participant(
      0, PARTICIPANT_QOS_DEFAULT, 0, OpenDDS::DCPS::NO_STATUS_MASK);

  std_msgs::msg::dds_::String_TypeSupport_var ts =
      new std_msgs::msg::dds_::String_TypeSupportImpl();

  if (ts->register_type(participant, "") != DDS::RETCODE_OK) {
    printf("registering type failed\n");
  }

  CORBA::String_var type_name = ts->get_type_name();
  DDS::Topic_var topic =
      participant->create_topic("rt/chatter", type_name, TOPIC_QOS_DEFAULT, 0,
                                OpenDDS::DCPS::NO_STATUS_MASK);

  if (!topic) {
    printf("topic creation failed\n");
  }

  DDS::Publisher_var publisher = participant->create_publisher(
      PUBLISHER_QOS_DEFAULT, 0, OpenDDS::DCPS::DEFAULT_STATUS_MASK);

  if (!publisher) {
    printf("publisher creation failed\n");
  }

  DDS::DataWriterQos dw_default_qos;
  publisher->get_default_datawriter_qos(dw_default_qos);

  DDS::DataWriter_var writer = publisher->create_datawriter(
      topic, dw_default_qos, 0, OpenDDS::DCPS::DEFAULT_STATUS_MASK);

  if (!writer) {
    printf("writer creation failed\n");
  }

  DDS::StatusCondition_var condition = writer->get_statuscondition();
  condition->set_enabled_statuses(DDS::PUBLICATION_MATCHED_STATUS);

  std_msgs::msg::dds_::String_DataWriter_var message_writer =
      std_msgs::msg::dds_::String_DataWriter::_narrow(writer);

  if (!message_writer) {
    printf("narrow creation failed\n");
  }

  std_msgs::msg::dds_::String_ msg{"TEST MESSAGE OPENDDS"};

  while (true) {
    auto error = message_writer->write(msg, DDS::HANDLE_NIL);
    if (error != DDS::RETCODE_OK)
      printf("failed to write\n");
  }

  participant->delete_contained_entities();
  dpf->delete_participant(participant);

  TheServiceParticipant->shutdown();
}