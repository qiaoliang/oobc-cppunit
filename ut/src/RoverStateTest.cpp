// RoverStateTest.cpp

#include "StdAfx.h"
#include <cppunit/config/SourcePrefix.h>
#include "RoverState.h"
#include "RoverStateTest.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( RoverStateTest );


void 
RoverStateTest::setUp()
{
}


void 
RoverStateTest::tearDown()
{
}


void 
RoverStateTest::test_equal()
{
  RoverState state_1 = RoverState(1,2,'N');
  RoverState state_2 = RoverState(1,2,'N');
  
  CPPUNIT_ASSERT_EQUAL( state_1, state_2);
}

void 
RoverStateTest::test_not_equal()
{
  RoverState state_N = RoverState(1,2,'N');
  RoverState state_E = RoverState(1,2,'E');
  CPPUNIT_ASSERT( state_N!=state_E);

  RoverState state_x_1= state_N;
  RoverState state_x_2= RoverState( 2,2,'N');
  CPPUNIT_ASSERT( state_x_1!=state_x_2);

  RoverState state_y_2= state_N;
  RoverState state_y_3= RoverState( 1,3,'N');
  CPPUNIT_ASSERT( state_y_2!=state_y_3);
 
}
void
RoverStateTest::test_should_be_1_3_N_after_1_M_when_1_2_N(  ){
    RoverState expectedPoint = RoverState( 1,3,'N' );
    RoverState startPoint = RoverState(1,2,'N' );
    CPPUNIT_ASSERT_EQUAL( expectedPoint, startPoint.execute());
}
void
RoverStateTest::test_should_be_4_3_E_after_1_M_when_3_3_E(  ){
    RoverState expectedPoint = RoverState( 4,3,'E');
    RoverState startPoint = RoverState( 3,3,'E' );
    CPPUNIT_ASSERT_EQUAL( expectedPoint, startPoint.execute());

}
//Part II
void RoverStateTest::test_given_facing_N_when_turn_L_then_facing_W(  ){
    RoverState expected=RoverState(0,0,'W' );
    RoverState start = RoverState( 0,0,'N' );

    CPPUNIT_ASSERT_EQUAL( expected, start.execute('L'));
}
