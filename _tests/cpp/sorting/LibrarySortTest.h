#ifndef LibrarySort_TEST_H
#define LibrarySort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class LibrarySortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( LibrarySortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // LibrarySort_TEST_H
