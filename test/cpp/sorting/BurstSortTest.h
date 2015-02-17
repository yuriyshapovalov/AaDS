#ifndef BurstSort_TEST_H
#define BurstSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class BurstSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( BurstSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // BurstSort_TEST_H
