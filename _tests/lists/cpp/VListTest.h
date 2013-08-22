#ifndef VList_TEST_H
#define VList_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class VListTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( VListTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // VList_TEST_H
