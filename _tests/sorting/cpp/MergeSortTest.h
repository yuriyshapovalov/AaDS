#ifndef MergeSort_TEST_H
#define MergeSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class MergeSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( MergeSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // MergeSort_TEST_H
