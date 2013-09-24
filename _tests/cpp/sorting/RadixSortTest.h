#ifndef RadixSort_TEST_H
#define RadixSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class RadixSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( RadixSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // RadixSort_TEST_H
