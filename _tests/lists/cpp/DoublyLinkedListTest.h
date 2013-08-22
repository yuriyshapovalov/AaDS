#ifndef DoublyLinkedList_TEST_H
#define DoublyLinkedList_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class DoublyLinkedListTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( DoublyLinkedListTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // DoublyLinkedList_TEST_H
