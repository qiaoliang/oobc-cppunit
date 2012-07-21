// RoverStateTest.h
#ifndef ROVERSTATETEST_H
#define ROVERSTATETEST_H

#include <cppunit/extensions/HelperMacros.h>

class RoverStateTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( RoverStateTest );
  CPPUNIT_TEST( test_equal);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void test_equal();
};

#endif  // ROVERTEST_H
