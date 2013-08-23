using NUnit.Framework;
using AaDS.Lists;

[TestFixture]
public class LinkedListTest
{
    private LinkedList<int> _list;

    [SetUp]
    public void Init() {
       // list = new LinkedList<int>();
    }

	[Test]
	public void LinkedList_Add_IntContainerTest()
	{
        	LinkedList<int> list = new LinkedList<int>();
		list.add(1);
		list.add(2);
		list.add(3);

		Assert.AreEqual(list.Length, 3);
		Assert.AreEqual(list.value, 1);
		Assert.AreEqual(list.Next().value, 2);
		Assert.AreEqual(list.Next().Next().value, 3);
		Assert.AreEqual(list.Next().Next().Next(), null);
	}

	[Test]
	public void LinkedList_Remove_IntContainerTest()
	{
		LinkedList<int> list = new LinkedList<int>();
		list.add(1);
		list.add(2);
		list.add(3);
		list.add(4);

		Assert.AreEqual(list.Length, 4);
		
		list.remove(4);
		// 1 -> 2 -> 3 -> null 
		Assert.AreEqual(list.Length, 3);
		Assert.AreEqual(list.value, 1);
		Assert.AreEqual(list.Next().value, 2);
		Assert.AreEqual(list.Next().Next().value, 3);
		Assert.AreEqual(list.Next().Next().Next(), null);

		list.remove(2);
		// 1 -> 3 -> null
		Assert.AreEqual(list.Length, 2);
		Assert.AreEqual(list.value, 1);
		Assert.AreEqual(list.Next().value, 3);
		Assert.AreEqual(list.Next().Next(), null);		

		list.remove(1);
		//  3 -> null
		Assert.AreEqual(list.Length, 1);
		Assert.AreEqual(list.value, 3);
		Assert.AreEqual(list.Next(), null);

		list.remove(3);
		// null
		Assert.AreEqual(list.Length, 0);
		Assert.AreEqual(list.value, null);
	}

	[Test]
	public void LinkedList_Length_IntContainerTest()
	{
		LinkedList<int> list = new LinkedList<int>();
		list.add(1);
		list.add(2);
		list.add(3);

		// 1 -> 2 -> 3 -> null
		Assert.AreEqual(list.Length, 3);

		list.add(4);
		
		// 1 -> 2 -> 3 -> 4 -> null
		Assert.AreEqual(list.Length, 4);

		list.remove(4);
		list.remove(3);

		// 1-> 2 -> null
		Assert.AreEqual(list.Length, 2);
	}
}
