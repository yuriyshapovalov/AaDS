@echo off

echo.// %3 - %2>>%1
echo.>>%1
echo.package AaDS.%3 {>>%1
echo.>>%1
echo.	// @description %3 - %2>>%1
echo.	// O(n) ~ >>%1
echo.	public class %2 {>>%1
echo.>>%1
echo.		// @description>>%1
echo.		// O(n) ~>>%1
echo.		public void stubMethod() {>>%1
echo.		}>>%1
echo.	}>>%1
echo.}>>%1