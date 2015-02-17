#ifndef SplayTree_TEST_H
#define SplayTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class SplayTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( SplayTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // SplayTree_TEST_H
