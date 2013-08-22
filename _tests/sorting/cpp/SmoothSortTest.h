#ifndef SmoothSort_TEST_H
#define SmoothSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class SmoothSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( SmoothSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // SmoothSort_TEST_H
