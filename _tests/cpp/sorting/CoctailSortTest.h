#ifndef CoctailSort_TEST_H
#define CoctailSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class CoctailSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( CoctailSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // CoctailSort_TEST_H
