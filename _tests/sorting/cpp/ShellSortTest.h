#ifndef ShellSort_TEST_H
#define ShellSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class ShellSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( ShellSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // ShellSort_TEST_H
