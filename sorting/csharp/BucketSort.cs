using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Bucket sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class BucketSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
