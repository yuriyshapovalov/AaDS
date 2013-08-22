#ifndef SkipList_TEST_H
#define SkipList_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class SkipListTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( SkipListTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // SkipList_TEST_H
