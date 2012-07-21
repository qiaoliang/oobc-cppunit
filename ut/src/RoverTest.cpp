// RoverTest.cpp

#include "StdAfx.h"
#include <cppunit/config/SourcePrefix.h>
#include "Rover.h"
#include "RoverState.h"
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
RoverTest::test_should_be_1_9_N_after_7_M_when_1_2_N()
{
  RoverState expected = RoverState( 1,9,'N' );
  Rover rover = Rover(1,2,'N');

  rover.recieve("MMMMMMM");

  CPPUNIT_ASSERT_EQUAL( expected, rover.getState( ));
}


void
RoverTest::test_should_be_13_3_E_after_10_M_when_3_3_E( ){
    RoverState expected = RoverState( 13,3,'E' );
    Rover rover = Rover(3,3,'E' );
    rover.recieve("MMMMMMMMMM" );
    CPPUNIT_ASSERT_EQUAL( expected, rover.getState());
    
}
void
RoverTest::test_should_be_0_1_W_after_1_M_when_1_1_W( ){
    RoverState expected = RoverState( 0,1,'W' );
    Rover rover = Rover(1,1,'W' );
    rover.recieve("M" );
    CPPUNIT_ASSERT_EQUAL( expected, rover.getState());
    
}
void
RoverTest::test_should_stay_at_same_state_if_no_move_at_all( ){
    RoverState expected = RoverState( 0,0,'S' );
    Rover rover = Rover(0,0,'S' );
    rover.recieve("" );
    CPPUNIT_ASSERT_EQUAL( expected, rover.getState());
    
}
void
RoverTest::test_should_be_0_minus_2_S_after_2_M_when_0_0_S( ){
    RoverState expected = RoverState( 0,-2,'S' );
    Rover rover = Rover(0,0,'S' );
    rover.recieve("MM" );
    CPPUNIT_ASSERT_EQUAL( expected, rover.getState());
    
}
void
RoverTest::test_should_be_1_3_N_after_LMLMLMLMM_when_1_2_N( ){
    RoverState expected = RoverState( 1,3,'N' );
    Rover rover = Rover(1,2,'N' );
    rover.recieve("LMLMLMLMM" );
    CPPUNIT_ASSERT_EQUAL( expected, rover.getState());
    
}
//part II
void
RoverTest::test_given_facing_N_when_turn_L_then_facing_W_in_same_point( ){
    RoverState expected = RoverState(1,1,'W');
    Rover rover = Rover( 1,1,'N' );
    rover.recieve("L");
    CPPUNIT_ASSERT_EQUAL( expected, rover.getState());
}


