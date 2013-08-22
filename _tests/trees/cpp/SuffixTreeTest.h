#ifndef SuffixTree_TEST_H
#define SuffixTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class SuffixTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( SuffixTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // SuffixTree_TEST_H
