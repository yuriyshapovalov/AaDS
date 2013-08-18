
namespace AaDS.Lists
{
    public class LinkedList<T>
    {
        private Node _first;

        private class Node
        {
            T value;
            Node Next;
        }

        public LinkedList()
        {
            _first = new Node();
        }
    }
}