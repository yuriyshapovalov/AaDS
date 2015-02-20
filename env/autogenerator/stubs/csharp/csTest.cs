using NUnit.Framework;
using AaDS.%3;
using AaDS.DataProvider;

[TestFixture]
public class %2Test
{
	// private %2 _testInstance;
	private DataProvider _provider;

	[SetUp]
	public void Init()
	{
		// this._testInstance = new %2();
		this._provider = DataProvider.GetDataProvider();
	}

	// remove it after real code will be created
	[Test]
	public void AlwaysFailedTestStub()
	{
		Assert.Fail();
	}
}
