#ifndef UnrolledLinkedList_TEST_H
#define UnrolledLinkedList_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class UnrolledLinkedListTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( UnrolledLinkedListTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // UnrolledLinkedList_TEST_H
