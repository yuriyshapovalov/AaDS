using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Comb sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class CombSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
