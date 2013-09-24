#ifndef JSort_TEST_H
#define JSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class JSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( JSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // JSort_TEST_H
