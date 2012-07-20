// RoverTest.cpp

#include "StdAfx.h"
#include <cppunit/config/SourcePrefix.h>
#include "RoverTest.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( RoverTest );


void 
MoneyTest::setUp()
{
}


void 
MoneyTest::tearDown()
{
}


void 
MoneyTest::test_should_be_1_9_N_after_7_M_when_1_2_N()
{
  Rover rover = Rover(1,2,'N');
  rover.recieve('MMMMMMM');
  
  CPPUNIT_ASSERT_EQUAL( 1, rover.getX());
  CPPUNIT_ASSERT_EQUAL( 9, rover.getY());
  CPPUNIT_ASSERT_EQUAL( 'N', rover.getFacing());
}

