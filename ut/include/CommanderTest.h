// CommanderTest.h
#ifndef COMMANDERTEST_H
#define COMMANDERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class CommanderTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( CommanderTest );
  CPPUNIT_TEST( test_what);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void test_what( );
};

#endif  // ROVERTEST_H
