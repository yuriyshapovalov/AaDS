#ifndef AdaptiveSort_TEST_H
#define AdaptiveSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class AdaptiveSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( AdaptiveSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // AdaptiveSort_TEST_H
