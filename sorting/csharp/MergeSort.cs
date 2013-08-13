using System;

namespace AaDS.Sorting 
{
    public class MergeSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            return array;
        }
    }
}