using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Stand sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class StandSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
