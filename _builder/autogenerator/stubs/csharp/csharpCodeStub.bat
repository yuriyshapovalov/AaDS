@echo off

echo.using System;>>%1
echo.>>%1
echo.namespace AaDS.%3>>%1
echo.{>>%1
echo.	/// ^<summary^> >>%1
echo.	/// %3 - %2 >>%1
echo.	/// ^</summary^> >>%1
echo.	/// O(n) ~ ... >>%1
echo.	///	>>%1
echo.	public class %2>>%1
echo.	{>>%1
echo.		public %2()>>%1
echo.		{}>>%1
echo.>> %1
echo.		/// ^<summary^>^</summary^>	>>%1
echo.		/// ^<method^> >>%1
echo.	}>>%1
echo.}>>%1