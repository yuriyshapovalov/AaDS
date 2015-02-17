#ifndef UnshuffleSort_TEST_H
#define UnshuffleSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class UnshuffleSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnshuffleSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // UnshuffleSort_TEST_H
