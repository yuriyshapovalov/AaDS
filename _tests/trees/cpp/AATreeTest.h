#ifndef AATree_TEST_H
#define AATree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class AATreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( AATreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // AATree_TEST_H
