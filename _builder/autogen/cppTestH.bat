@echo off

echo.#ifndef %2_TEST_H>>%1
echo.#define %2_TEST_H>>%1
echo.>>%1
echo.// #include ^<cppunit/extensions/HelperMacros.h^> >>%1
echo.>>%1
echo.class %2Test : public CppUnit::TestFixture>>%1
echo.{>>%1
echo.	CPPUNIT_TEST_SUITE( %2Test );>>%1
echo.	CPPUNIT_TEST( testConstructor );>>%1
echo.	CPPUNIT_TEST_SUITE_END();>>%1
echo.>>%1
echo.public:>>%1
echo.	void setUp();>>%1
echo.	void tearDown();>>%1
echo.>>%1
echo.	void testConstructor();>>%1
echo.};>>%1
echo.>>%1
echo.#endif  // %2_TEST_H>>%1