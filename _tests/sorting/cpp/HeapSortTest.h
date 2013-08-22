#ifndef HeapSort_TEST_H
#define HeapSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class HeapSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( HeapSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // HeapSort_TEST_H
