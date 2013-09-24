#ifndef SelfOrganizedList_TEST_H
#define SelfOrganizedList_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class SelfOrganizedListTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( SelfOrganizedListTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // SelfOrganizedList_TEST_H
