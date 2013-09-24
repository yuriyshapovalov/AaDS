#ifndef BubbleSort_TEST_H
#define BubbleSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class BubbleSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( BubbleSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // BubbleSort_TEST_H
