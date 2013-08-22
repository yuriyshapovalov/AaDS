#ifndef InsertionSort_TEST_H
#define InsertionSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class InsertionSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( InsertionSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // InsertionSort_TEST_H
