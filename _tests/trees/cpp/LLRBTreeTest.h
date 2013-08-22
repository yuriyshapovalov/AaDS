#ifndef LLRBTree_TEST_H
#define LLRBTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class LLRBTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( LLRBTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // LLRBTree_TEST_H
