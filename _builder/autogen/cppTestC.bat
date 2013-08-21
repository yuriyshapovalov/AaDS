@echo off

echo.#include "stdafx.h">>%1
echo.#include "%2Test.h">>%1
echo.>>%1
echo.// Registers the fixture into the 'registry'>>%1
echo.CPPUNIT_TEST_SUITE_REGISTRATION( %2Test );>>%1
echo.>>%1
echo.void %2::setUp()>>%1
echo.{>>%1
echo.}>>%1
echo.>>%1
echo.void %2::tearDown()>>%1
echo.{>>%1
echo.}>>%1
echo.>>%1
echo.void %2::testConstruct()>>%1
echo.{>>%1
echo.  CPPUNIT_FAIL("not implemented");>>%1
echo.}>>%1