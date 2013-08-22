#ifndef XFastTree_TEST_H
#define XFastTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class XFastTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( XFastTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // XFastTree_TEST_H
