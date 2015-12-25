package algorithms.list;

public class LinkedList<Value> {
	public Node head;

	class Node {
		Value value;
		Node next;

		public Node(Value value) {
			this.value = value;
			this.next = null;
		}
	}

	// O(1)
	public void addHead(Value val) {
		if (head == null) {
			head = new Node(val);
		} 
		else {
			Node n = new Node(val);
			n.next = head;
			head = n;
		}
	}

	// O(n)
	public void addTail(Value val) {
		if (head == null) {
			head = new Node(val);
		}
		else {
			Node i = head;
			while(i.next != null)
				i = i.next;
			i.next = new Node(val);
		}
	}

	public void addHead(Value[] array) {
		for(int i = 0; i < array.length; i++) {
			addHead(array[i]);
		}
	}

	public void addTail(Value[] array) {
		if(array.length == 0)
			return;
		int i = 0;
		Node n = head;
		if(n == null) {
			head = new Node(array[i++]);
		}

		if(n.next != null) {
			n = n.next;
		}

		for(; i < array.length; i++) {
			n.next = new Node(array[i]);
			n = n.next;
		}
	}
	
	public void print() {
		if(head == null)
			return;
		Node n = head;
		while(n != null) {
			System.out.print(n.value + "->");
			n = n.next;
		}
	}

	public static void main(String[] argc) {
		LinkedList<Integer> list = new LinkedList<Integer>();
		Integer[] arr = new Integer[] {1, 2, 3, 4, 5, 6, 7};
		list.addHead(arr);
		list.print();
	}
}
