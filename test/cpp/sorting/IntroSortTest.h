#ifndef IntroSort_TEST_H
#define IntroSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class IntroSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( IntroSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // IntroSort_TEST_H
