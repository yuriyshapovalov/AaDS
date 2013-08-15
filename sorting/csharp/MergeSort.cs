using System;

namespace AaDS.Sorting 
{
    public class MergeSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
	    // if array has only zero or one element, it is already sorted
	    if(array.Count <= 1)
	    {
                return array;
	    }
        }
    }
}
