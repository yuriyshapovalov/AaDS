using NUnit.Framework;
using AaDS.;
using AaDS.DataProvider;

[TestFixture]
public class stackTest
{
	// private stack _testInstance;
	private DataProvider _provider;

	[SetUp]
	public void Init()
	{
		// this._testInstance = new stack();
		this._provider = DataProvider.GetDataProvider();
	}

	// remove it after real code will be created
	[Test]
	public void AlwaysFailedTestStub()
	{
		Assert.Fail();
	}
}
