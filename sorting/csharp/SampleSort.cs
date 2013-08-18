using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Sample sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class SampleSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
