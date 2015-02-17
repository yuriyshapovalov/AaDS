#ifndef stack_TEST_H
#define stack_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class stackTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( stackTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // stack_TEST_H
