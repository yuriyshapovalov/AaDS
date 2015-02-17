#ifndef GnomeSort_TEST_H
#define GnomeSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class GnomeSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( GnomeSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // GnomeSort_TEST_H
