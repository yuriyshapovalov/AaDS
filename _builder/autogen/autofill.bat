@echo off

echo.namespace AaDS.%1  >> text.txt
echo.{  >> text.txt
echo.	public class %2  >> text.txt
echo.	{} >> text.txt
echo.}  >> text.txt

