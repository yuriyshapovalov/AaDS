#ifndef TournamentSort_TEST_H
#define TournamentSort_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class TournamentSortTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TournamentSortTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // TournamentSort_TEST_H
