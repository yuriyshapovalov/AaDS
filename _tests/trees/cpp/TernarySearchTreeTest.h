#ifndef TernarySearchTree_TEST_H
#define TernarySearchTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class TernarySearchTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TernarySearchTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // TernarySearchTree_TEST_H
