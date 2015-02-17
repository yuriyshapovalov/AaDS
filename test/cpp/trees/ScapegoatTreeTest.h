#ifndef ScapegoatTree_TEST_H
#define ScapegoatTree_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class ScapegoatTreeTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( ScapegoatTreeTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // ScapegoatTree_TEST_H
