#ifndef DoublyConnectedEdgeList_TEST_H
#define DoublyConnectedEdgeList_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class DoublyConnectedEdgeListTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( DoublyConnectedEdgeListTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // DoublyConnectedEdgeList_TEST_H
