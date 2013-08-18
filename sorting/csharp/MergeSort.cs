using System;

namespace AaDS.Sorting 
{
    /// <summary>
    /// Merge sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class MergeSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
	        // if array has only zero or one element, it is already sorted
	        if(array.Length <= 1)
	        {
                    return array;
	        }
            // not implemented
            return array;
        }
    }
}
