@echo off

echo.#ifndef %2_H>>%1
echo.#define %2_H>>%1
echo.
echo.// #include ^<string^> >>%1
echo.>>%1
echo.// %2>>%1
echo.// O(n) ~>>%1
echo.class %2>>%1
echo.{>>%1
echo.public:>>%1
echo.	%2( )>>%1
echo.	{>>%1
echo.	}>>%1
echo.>>%1
echo.	//>>%1
echo.private:>>%1
echo.	//>>%1
echo.};>>%1
echo.>>%1
echo.#endif>>%1