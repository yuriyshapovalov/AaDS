@echo off

echo.using NUnit.Framework;													> %1
echo.using AaDS.%3;															> %1
echo.using AaDS.DataProvider;												> %1
echo.																		> %1
echo.[TestFixture]															> %1
echo.public class %2Test													> %1
echo.{																		> %1
echo.	// private %2 _testInstance; 										> %1
echo.	private DataProvider _provider;										> %1
echo.																		> %1
echo.	[SetUp]																> %1
echo.	public void Init()													> %1
echo.	{																	> %1
echo.		// this._testInstance = new %2();								> %1
echo.		this._provider = DataProvider.GetDataProvider();				> %1
echo.	}																	> %1
echo.																		> %1
echo.	// remove it after real code will be created						> %1
echo.	[Test]																> %1
echo.	public void AlwaysFailedTestStub()									> %1
echo.	{																	> %1
echo.		Assert.Fail();													> %1
echo.	}																	> %1
echo.}																		> %1
