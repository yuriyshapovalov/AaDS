#ifndef AmericanFlagSort_TEST_H
#define AmericanFlagSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class AmericanFlagSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( AmericanFlagSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // AmericanFlagSort_TEST_H
