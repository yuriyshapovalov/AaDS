#ifndef QuickSort_TEST_H
#define QuickSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class QuickSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( QuickSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // QuickSort_TEST_H
