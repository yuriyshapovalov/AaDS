using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Bead sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class BeadSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
