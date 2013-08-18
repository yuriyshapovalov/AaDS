using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Counting sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class CountingSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
