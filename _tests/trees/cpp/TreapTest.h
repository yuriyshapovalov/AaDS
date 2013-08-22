#ifndef Treap_TEST_H
#define Treap_TEST_H

// #include <cppunit/extensions/HelperMacros.h> 

class TreapTest : public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( TreapTest );
	CPPUNIT_TEST( testConstructor );
	CPPUNIT_TEST_SUITE_END();

public:
	void setUp();
	void tearDown();

	void testConstructor();
};

#endif  // Treap_TEST_H
