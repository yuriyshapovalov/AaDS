@echo off

"use strict";

echo.// %3 - %2>>%1
echo.var %2 = function() {>>%1
echo.	// vars>>%1
echo.>>%1
echo.	//>>%1
echo.	// %2 method>>%1
echo.	// O(n) ~ >>%1
echo.	function stub() {}>>%1
echo.>>%1
echo.	return {>>%1
echo.		//>>%1
echo.		stubFn: stub >>%1
echo.	}>>%1
echo.}();>>%1