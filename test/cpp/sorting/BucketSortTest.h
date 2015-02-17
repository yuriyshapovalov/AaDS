#ifndef BucketSort_TEST_H
#define BucketSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class BucketSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( BucketSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // BucketSort_TEST_H
