// RoverStateTest.h
#ifndef ROVERSTATETEST_H
#define ROVERSTATETEST_H

#include <cppunit/extensions/HelperMacros.h>

class RoverStateTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( RoverStateTest );
  CPPUNIT_TEST( test_equal);
  CPPUNIT_TEST( test_not_equal);
  CPPUNIT_TEST( test_should_be_1_3_N_after_1_M_when_1_2_N );
  CPPUNIT_TEST( test_should_be_4_3_E_after_1_M_when_3_3_E);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void test_equal();
  void test_not_equal();
  void test_should_be_1_3_N_after_1_M_when_1_2_N(  );
  void test_should_be_4_3_E_after_1_M_when_3_3_E(  );
};

#endif  // ROVERTEST_H
