#ifndef YFastTree_TEST_H
#define YFastTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class YFastTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( YFastTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // YFastTree_TEST_H
