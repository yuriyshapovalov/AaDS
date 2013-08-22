#ifndef OddEvenSort_TEST_H
#define OddEvenSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class OddEvenSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( OddEvenSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // OddEvenSort_TEST_H
