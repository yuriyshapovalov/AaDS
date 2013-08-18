using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Pigeonhole sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class PigeonholeSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
