using System;
using NUnit.Framework;
using AaDS.Sorting;
using AaDS.DataProvider;

[TestFixture]
public class SortingBasicTester<T> where T : IComparable
{
    protected ISort<T> _sorter;

    [SetUp]
    public virtual void Init()
    {
        Assert.Ignore();
    }


}
