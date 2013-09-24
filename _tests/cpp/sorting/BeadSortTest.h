#ifndef BeadSort_TEST_H
#define BeadSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class BeadSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( BeadSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // BeadSort_TEST_H
