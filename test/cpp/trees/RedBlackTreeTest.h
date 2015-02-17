#ifndef RedBlackTree_TEST_H
#define RedBlackTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class RedBlackTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( RedBlackTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // RedBlackTree_TEST_H
