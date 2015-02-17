#ifndef HashTree_TEST_H
#define HashTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class HashTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( HashTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // HashTree_TEST_H
