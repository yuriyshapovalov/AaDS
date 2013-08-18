
public class LinkedList<T>
{
	private Node<T> first;

    private class Node<T>
    {
        public T value { get; set; }
        public Node<T> Next { get; set; }
    }
    
	public LinkedList()
	{
		_first = new Node<T>();
	}


}
