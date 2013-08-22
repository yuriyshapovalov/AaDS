#ifndef CombSort_TEST_H
#define CombSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class CombSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( CombSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // CombSort_TEST_H
