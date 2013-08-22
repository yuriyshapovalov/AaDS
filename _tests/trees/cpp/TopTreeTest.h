#ifndef TopTree_TEST_H
#define TopTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class TopTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TopTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // TopTree_TEST_H
