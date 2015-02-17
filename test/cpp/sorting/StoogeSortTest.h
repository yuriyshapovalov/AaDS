#ifndef StoogeSort_TEST_H
#define StoogeSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class StoogeSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( StoogeSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // StoogeSort_TEST_H
