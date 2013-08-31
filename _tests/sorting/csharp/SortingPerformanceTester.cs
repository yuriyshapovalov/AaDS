using System;
using NUnit.Framework;
using AaDS.Sorting;
using AaDS.DataProvider;

[TestFixture]
public class SortingPerformanceTester<T> where T : IComparable
{
    protected ISort<T> _sort;

    [SetUp]
    public virtual void Init()
    {
        Assert.Ignore();
    }
}