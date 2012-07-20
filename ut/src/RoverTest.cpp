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
RoverTest::test_should_be_1_9_N_after_7_M_when_1_2_N()
{
  Rover rover = Rover(1,2,'N');
  rover.recieve("MMMMMMM");
  
  CPPUNIT_ASSERT_EQUAL( 1, rover.getX());
  CPPUNIT_ASSERT_EQUAL( 9, rover.getY());
  CPPUNIT_ASSERT_EQUAL( 'N', rover.getFacing());
}

void
RoverTest::test_should_be_1_3_N_after_1_M_when_1_2_N(  ){
    Rover rover = Rover(1,2,'N' );
    rover.execute();
    CPPUNIT_ASSERT_EQUAL( 1, rover.getX());
    CPPUNIT_ASSERT_EQUAL( 3, rover.getY());
    CPPUNIT_ASSERT_EQUAL( 'N', rover.getFacing());
}

void
RoverTest::test_should_be_13_3_E_after_10_M_when_3_3_E( ){
    Rover rover = Rover(3,3,'E' );
    rover.recieve("MMMMMMMMMM" );
    CPPUNIT_ASSERT_EQUAL( 13, rover.getX());
    CPPUNIT_ASSERT_EQUAL( 3, rover.getY());
    CPPUNIT_ASSERT_EQUAL( 'E', rover.getFacing());
    
}
