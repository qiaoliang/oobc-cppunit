// RoverTest.h
#ifndef ROVERTEST_H
#define ROVERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class RoverTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( RoverTest );
  CPPUNIT_TEST( Rover_should_turn_LEFT_by_90_degree_and_stay_at_same_point_when_excuting_command_L);
  CPPUNIT_TEST( Rover_should_turn_RIGHT_by_90_degree_and_stay_at_same_point_when_excuting_command_R);
  CPPUNIT_TEST( Rover_should_move_forward_one_step_with_same_facing_when_excuting_command_M);
  CPPUNIT_TEST( Rover_should_keep_same_state_when_receiving_empty_signal);
  CPPUNIT_TEST( Rover_should_handle_multiple_signals_at_a_time);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();
  void Rover_should_turn_LEFT_by_90_degree_and_stay_at_same_point_when_excuting_command_L();
  void Rover_should_turn_RIGHT_by_90_degree_and_stay_at_same_point_when_excuting_command_R();
  void Rover_should_move_forward_one_step_with_same_facing_when_excuting_command_M();
  
  void Rover_should_keep_same_state_when_receiving_empty_signal();

  void Rover_should_handle_multiple_signals_at_a_time();
};

#endif  // ROVERTEST_H
