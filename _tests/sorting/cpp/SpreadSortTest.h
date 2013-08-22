#ifndef SpreadSort_TEST_H
#define SpreadSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class SpreadSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( SpreadSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // SpreadSort_TEST_H
