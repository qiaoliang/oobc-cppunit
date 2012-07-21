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
CommanderTest::test_should_get_1_9_N_after_sending_1_2_N_and_7_Ms()
{
    std::string expected_message = "1 9 N"; 
    CPPUNIT_ASSERT( expected_message==Commander().send("1 2 N","MMMMMMM"));
}
