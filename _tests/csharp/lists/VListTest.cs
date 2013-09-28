using NUnit.Framework;
using AaDS.Lists;
using AaDS.Helper;

[TestFixture]
public class VListTest
{
	// private VList _testInstance;
	private DataProvider _provider;

	[SetUp]
	public void Init()
	{
		// this._testInstance = new VList();
		this._provider = DataProvider.GetDataProvider();
	}

	// remove it after real code will be created
	[Test]
	public void AlwaysFailedTestStub()
	{
		Assert.Fail();
	}
}
