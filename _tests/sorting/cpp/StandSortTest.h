#ifndef StandSort_TEST_H
#define StandSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class StandSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( StandSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // StandSort_TEST_H
