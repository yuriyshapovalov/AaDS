#ifndef FlashSort_TEST_H
#define FlashSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class FlashSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( FlashSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // FlashSort_TEST_H
