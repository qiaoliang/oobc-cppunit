// RoverTest.h
#ifndef ROVERTEST_H
#define ROVERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class RoverTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( RoverTest );
  CPPUNIT_TEST( GIVEN_rover_at_1_2_N_WHEN_move_7_steps_THEN_it_should_be_at_1_9_N);
  CPPUNIT_TEST( GIVEN_rover_at_3_3_E_WHEN_move_10_steps_THEN_it_should_be_at_13_3_E);
  CPPUNIT_TEST( GIVEN_rover_at_1_1_W_WHEN_move_1_step_THEN_it_should_be_at_0_1_W);
  CPPUNIT_TEST( GIVEN_rover_at_0_0_S_WHEN_move_2_steps_THEN_it_should_be_at_0_minus_2_S);
  CPPUNIT_TEST( GIVEN_rover_at_any_where_WHEN_empty_signal_received_THEN_it_should_stay);

  CPPUNIT_TEST( GIVEN_rover_faces_W_WHEN_receiving_L_THEN_it_should_faces_N_and_stays_at_same_location);

  CPPUNIT_TEST( GIVEN_rover_at_1_2_N_WHEN_receiving_LMLMLMLMM_THEN_it_should_be_at_1_3_N);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void GIVEN_rover_at_1_2_N_WHEN_move_7_steps_THEN_it_should_be_at_1_9_N();
  void GIVEN_rover_at_3_3_E_WHEN_move_10_steps_THEN_it_should_be_at_13_3_E();
  void GIVEN_rover_at_1_1_W_WHEN_move_1_step_THEN_it_should_be_at_0_1_W();
  void GIVEN_rover_at_0_0_S_WHEN_move_2_steps_THEN_it_should_be_at_0_minus_2_S();
  void GIVEN_rover_at_any_where_WHEN_empty_signal_received_THEN_it_should_stay(  );
  void GIVEN_rover_faces_W_WHEN_receiving_L_THEN_it_should_faces_N_and_stays_at_same_location();
  void GIVEN_rover_at_1_2_N_WHEN_receiving_LMLMLMLMM_THEN_it_should_be_at_1_3_N(  );
};

#endif  // ROVERTEST_H
