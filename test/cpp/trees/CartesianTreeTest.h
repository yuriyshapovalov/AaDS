#ifndef CartesianTree_TEST_H
#define CartesianTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class CartesianTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( CartesianTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // CartesianTree_TEST_H
