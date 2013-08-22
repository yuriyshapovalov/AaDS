#ifndef SimpleSort_TEST_H
#define SimpleSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class SimpleSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( SimpleSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // SimpleSort_TEST_H
