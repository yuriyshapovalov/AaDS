#ifndef PigeonholeSort_TEST_H
#define PigeonholeSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class PigeonholeSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( PigeonholeSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // PigeonholeSort_TEST_H
