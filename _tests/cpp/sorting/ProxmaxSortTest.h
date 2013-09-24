#ifndef ProxmaxSort_TEST_H
#define ProxmaxSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class ProxmaxSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( ProxmaxSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // ProxmaxSort_TEST_H
