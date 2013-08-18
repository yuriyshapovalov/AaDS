using NUnit.Framework;
using AaDS.Lists;

[TestFixture]
public class LinkedListTest
{
    private LinkedList<int> _list;

    [SetUp]
    public void Init() {
        list = new LinkedList<int>();
    }

	[Test]
	public void LinkedListGenericContainerTest()
	{
        LinkedList<int> list = new LinkedList<int>();
		list.add(1);
		list.add(2);
		list.add(3);

		Assert.AreEqual(list.Length, 3);

		Assert.AreEqual(list.value, 1);

		Assert.AreEqual(list.Next().value, 2);
		
	}
}
