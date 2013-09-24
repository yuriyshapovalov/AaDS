using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Patience sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class PatienceSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
