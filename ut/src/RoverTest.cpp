// RoverTest.cpp

#include "StdAfx.h"
#include <cppunit/config/SourcePrefix.h>
#include "Rover.h"
#include "RoverTest.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( RoverTest );


void 
RoverTest::setUp()
{
}


void 
RoverTest::tearDown()
{
}

void RoverTest::Rover_should_turn_LEFT_by_90_degree_and_stay_at_same_point_when_excuting_command_L(){
  Rover rover=Rover(1,9, 'N');
  CPPUNIT_ASSERT_EQUAL( std::string("1 9 W"), rover.recieve("L"));
  CPPUNIT_ASSERT_EQUAL( std::string("1 9 S"), rover.recieve("L"));
  CPPUNIT_ASSERT_EQUAL( std::string("1 9 E"), rover.recieve("L"));
  CPPUNIT_ASSERT_EQUAL( std::string("1 9 N"), rover.recieve("L"));
}
void RoverTest::Rover_should_turn_RIGHT_by_90_degree_and_stay_at_same_point_when_excuting_command_R(){
  Rover rover=Rover(1,9, 'N');
  CPPUNIT_ASSERT_EQUAL( std::string("1 9 E"), rover.recieve("R"));
  CPPUNIT_ASSERT_EQUAL( std::string("1 9 S"), rover.recieve("R"));
  CPPUNIT_ASSERT_EQUAL( std::string("1 9 W"), rover.recieve("R"));
  CPPUNIT_ASSERT_EQUAL( std::string("1 9 N"), rover.recieve("R"));
}
void RoverTest::Rover_should_move_forward_one_step_with_same_facing_when_excuting_command_M(){
  Rover rover_faced_N=Rover(1,9, 'N');
  CPPUNIT_ASSERT_EQUAL( std::string("1 10 N"), rover_faced_N.recieve("M"));
  Rover rover_faced_W=Rover(1,9, 'W');
  CPPUNIT_ASSERT_EQUAL( std::string("0 9 W"), rover_faced_W.recieve("M"));
  Rover rover_faced_S=Rover(1,9, 'S');
  CPPUNIT_ASSERT_EQUAL( std::string("1 8 S"), rover_faced_S.recieve("M"));
  Rover rover_faced_E=Rover(1,9, 'E');
  CPPUNIT_ASSERT_EQUAL( std::string("2 9 E"), rover_faced_E.recieve("M"));
}

void
RoverTest::Rover_should_keep_same_state_when_receiving_empty_signal( ){
    std::string samelocation = "0 0 S";
    Rover rover_at_anywhere = Rover(0,0,'S' );
    CPPUNIT_ASSERT_EQUAL( samelocation,rover_at_anywhere.recieve(""));
    
}
void
RoverTest::Rover_should_handle_multiple_signals_at_a_time( ){
    std::string expected = "1 3 N";
    Rover rover = Rover(1,2,'N' );
    CPPUNIT_ASSERT_EQUAL( expected, rover.recieve("LMLMLMLMM"));
}
