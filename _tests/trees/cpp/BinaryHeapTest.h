#ifndef BinaryHeap_TEST_H
#define BinaryHeap_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class BinaryHeapTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( BinaryHeapTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // BinaryHeap_TEST_H
