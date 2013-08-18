using System;

namespace AaDS.Sorting
{
    /// <summary>
    /// Tournament sort algorithm
    ///  Θ(n) ~ ____
    /// </summary>
    public class TournamentSort<T> : ISort<T> where T : IComparable, new()
    {
        public T[] Sort(T[] array)
        {
            // not implemented
            return array;
        }
    }
}
