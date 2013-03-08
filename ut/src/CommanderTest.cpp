// CommanderTest.cpp

#include "StdAfx.h"
#include <cppunit/config/SourcePrefix.h>
#include "Rover.h"
#include "Commander.h"
#include "CommanderTest.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( CommanderTest );


void 
CommanderTest::setUp()
{
}


void 
CommanderTest::tearDown()
{
}


void 
CommanderTest::test_what()
{
    std::string message = "please think about what we have to test here"; 
    CPPUNIT_ASSERT_EQUAL(message,message);
}
