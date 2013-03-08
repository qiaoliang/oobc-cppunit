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


void 
RoverTest::GIVEN_rover_at_1_2_N_WHEN_move_7_steps_THEN_it_should_be_at_1_9_N()
{
  std::string expected = "1 9 N";
  Rover rover = Rover(1,2,'N');
  CPPUNIT_ASSERT_EQUAL( expected, rover.recieve("MMMMMMM"));
}


void
RoverTest::GIVEN_rover_at_3_3_E_WHEN_move_10_steps_THEN_it_should_be_at_13_3_E( ){
    std::string expected = "13 3 E";
    Rover rover = Rover(3,3,'E' );
    CPPUNIT_ASSERT_EQUAL( expected, rover.recieve("MMMMMMMMMM" ));
    
}
void
RoverTest::GIVEN_rover_at_1_1_W_WHEN_move_1_step_THEN_it_should_be_at_0_1_W( ){
    std::string expected ="0 1 W";
    Rover rover = Rover(1,1,'W' );
    CPPUNIT_ASSERT_EQUAL( expected,rover.recieve("M" ));
    
}
void
RoverTest::GIVEN_rover_at_any_where_WHEN_empty_signal_received_THEN_it_should_stay( ){
    std::string samelocation = "0 0 S";
    Rover rover_at_anywhere = Rover(0,0,'S' );
    CPPUNIT_ASSERT_EQUAL( samelocation,rover_at_anywhere.recieve(""));
    
}
void
RoverTest::GIVEN_rover_at_0_0_S_WHEN_move_2_steps_THEN_it_should_be_at_0_minus_2_S( ){
    std::string expected = "0 -2 S";
    Rover rover = Rover(0,0,'S' );
    CPPUNIT_ASSERT_EQUAL( expected, rover.recieve("MM"));
    
}
void
RoverTest::GIVEN_rover_at_1_2_N_WHEN_receiving_LMLMLMLMM_THEN_it_should_be_at_1_3_N( ){
    std::string expected = "1 3 N";
    Rover rover = Rover(1,2,'N' );
    CPPUNIT_ASSERT_EQUAL( expected, rover.recieve("LMLMLMLMM"));
    
}
void
RoverTest::GIVEN_rover_faces_W_WHEN_receiving_L_THEN_it_should_faces_N_and_stays_at_same_location(){
    std::string expected = "1 1 W";
    Rover rover = Rover( 1,1,'N' );
    CPPUNIT_ASSERT_EQUAL( expected, rover.recieve("L"));
}
