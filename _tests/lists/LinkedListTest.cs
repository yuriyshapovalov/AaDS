using NUnit.Framework;
using AaDS.Lists;

[TestFixture]
public class LinkedListTest
{
	[Test]
	void LinkedListGenericContainerTest()
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
