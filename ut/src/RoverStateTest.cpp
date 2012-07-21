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
