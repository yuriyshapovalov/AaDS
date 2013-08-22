#ifndef CountingSort_TEST_H
#define CountingSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class CountingSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( CountingSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // CountingSort_TEST_H
