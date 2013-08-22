#ifndef TimSort_TEST_H
#define TimSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class TimSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TimSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // TimSort_TEST_H
