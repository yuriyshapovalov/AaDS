#ifndef CycleSort_TEST_H
#define CycleSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class CycleSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( CycleSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // CycleSort_TEST_H
