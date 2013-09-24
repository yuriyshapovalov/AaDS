#ifndef PancakeSort_TEST_H
#define PancakeSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class PancakeSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( PancakeSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // PancakeSort_TEST_H
