// RoverTest.h
#ifndef ROVERTEST_H
#define ROVERTEST_H

#include <cppunit/extensions/HelperMacros.h>

class RoverTest : public CPPUNIT_NS::TestFixture
{
  CPPUNIT_TEST_SUITE( RoverTest );
  CPPUNIT_TEST( test_should_be_1_9_N_after_7_M_when_1_2_N);
  CPPUNIT_TEST( test_should_be_13_3_E_after_10_M_when_3_3_E);
  CPPUNIT_TEST( test_should_be_0_1_W_after_1_M_when_1_1_W);
  CPPUNIT_TEST( test_should_be_0_minus_2_S_after_2_M_when_0_0_S );
  CPPUNIT_TEST( test_should_stay_at_same_state_if_no_move_at_all );
  CPPUNIT_TEST( test_should_be_1_3_N_after_LMLMLMLMM_when_1_2_N);
  CPPUNIT_TEST_SUITE_END();

public:
  void setUp();
  void tearDown();

  void test_should_be_1_9_N_after_7_M_when_1_2_N();
  void test_should_be_13_3_E_after_10_M_when_3_3_E(  );
  void test_should_be_0_1_W_after_1_M_when_1_1_W(  );
  void test_should_be_0_minus_2_S_after_2_M_when_0_0_S(  );
  void test_should_stay_at_same_state_if_no_move_at_all(  );
  void test_should_be_1_3_N_after_LMLMLMLMM_when_1_2_N(  );
};

#endif  // ROVERTEST_H
