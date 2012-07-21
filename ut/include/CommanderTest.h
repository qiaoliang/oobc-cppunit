// CommanderTest.h
#ifndef COMMANDERTEST_H
#define COMMANDERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class CommanderTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( CommanderTest );
  CPPUNIT_TEST( test_should_get_1_9_N_after_sending_1_2_N_and_7_Ms );
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void test_should_get_1_9_N_after_sending_1_2_N_and_7_Ms( );
};

#endif  // ROVERTEST_H
