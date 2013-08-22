#ifndef TwoThreeTree_TEST_H
#define TwoThreeTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class TwoThreeTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TwoThreeTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // TwoThreeTree_TEST_H
