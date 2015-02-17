#ifndef SelectionSort_TEST_H
#define SelectionSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class SelectionSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( SelectionSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // SelectionSort_TEST_H
