// MoneyTest.cpp

#include "StdAfx.h"
#include <cppunit/config/SourcePrefix.h>
#include "Money.h"
#include "MoneyTest.h"

// Registers the fixture into the 'registry'
CPPUNIT_TEST_SUITE_REGISTRATION( MoneyTest );


void 
MoneyTest::setUp()
{
}


void 
MoneyTest::tearDown()
{
}


void 
MoneyTest::testConstructor()
{
  // Set up
  const std::string currencyRMB( "RMB" );
  const double longNumber = 1234.5678;

  // Process
  Money money( longNumber, currencyRMB );

  // Check
  CPPUNIT_ASSERT_EQUAL( longNumber, money.getAmount() );
  CPPUNIT_ASSERT_EQUAL( currencyRMB, money.getCurrency() );
}


void
MoneyTest::testEqual()
{
  // Set up
  const Money money123RMB( 123, "RMB" );
  const Money money123USD( 123, "USD" );
  const Money money12RMB( 12, "RMB" );
  const Money money12USD( 12, "USD" );

  // Process & Check
  CPPUNIT_ASSERT( money123RMB == money123RMB );    // ==
  CPPUNIT_ASSERT( money12RMB != money123RMB );     // != amount
  CPPUNIT_ASSERT( money123USD != money123RMB );   // != currency
  CPPUNIT_ASSERT( money12USD != money123RMB );    // != currency and != amount
}


void 
MoneyTest::testAdd()
{
  // Set up
  const Money money12RMB( 12, "RMB" );
  const Money expectedMoney( 135, "RMB" );

  // Process
  Money money( 123, "RMB" );
  money += money12RMB;

  // Check
  CPPUNIT_ASSERT_EQUAL( expectedMoney, money );           // add works
  CPPUNIT_ASSERT( &money == &(money += money12RMB) );  // add returns ref. on 'this'.
}


void 
MoneyTest::testAddThrow()
{
  // Set up
  const Money money123RMB( 123, "RMB" );

  // Process
  Money money( 123, "USD" );
  money += money123RMB;        // should throw an exception
}
