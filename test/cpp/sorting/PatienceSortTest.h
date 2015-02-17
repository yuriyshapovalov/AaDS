#ifndef PatienceSort_TEST_H
#define PatienceSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class PatienceSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( PatienceSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // PatienceSort_TEST_H
