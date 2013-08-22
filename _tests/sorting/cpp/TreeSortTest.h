#ifndef TreeSort_TEST_H
#define TreeSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class TreeSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TreeSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // TreeSort_TEST_H
