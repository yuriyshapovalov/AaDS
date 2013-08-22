using NUnit.Framework;
using AaDS.Lists;
using AaDS.DataProvider;

[TestFixture]
public class DoublyLinkedListTest
{
	// private DoublyLinkedList _testInstance;
	private DataProvider _provider;

	[SetUp]
	public void Init()
	{
		// this._testInstance = new DoublyLinkedList();
		this._provider = DataProvider.GetDataProvider();
	}

	// remove it after real code will be created
	[Test]
	public void AlwaysFailedTestStub()
	{
		Assert.Fail();
	}
}
