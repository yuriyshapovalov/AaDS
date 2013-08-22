#ifndef RadixTree_TEST_H
#define RadixTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class RadixTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( RadixTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // RadixTree_TEST_H
