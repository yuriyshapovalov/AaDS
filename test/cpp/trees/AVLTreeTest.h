#ifndef AVLTree_TEST_H
#define AVLTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class AVLTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( AVLTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // AVLTree_TEST_H
