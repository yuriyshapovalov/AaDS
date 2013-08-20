@echo off

echo.using System;>> %1
echo.>> %1
echo.namespace AaDS.%2>> %1
echo.{>> %1
echo.	/// <summary> >> %1
echo.	/// %3 >> %1
echo.	/// </summary> >> %1
echo.	/// O(n) ~ ... >> %1
echo.	///	>> %1
echo.	public class %3>> %1
echo.	{>> %1
echo.		public %3()>> %1
echo.		{}>> %1
echo.>> %1
echo.		/// <summary></summary>	>> %1
echo.		/// <method> >> %1
echo.	}>> %1
echo.}>> %1