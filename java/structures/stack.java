// Structures - stack
import java.util.Iterator;

package AaDS.Structures;

// @description - Stack
public class Stack<Item> implements Iterable<Item> {

    private Item[] array = (Item[]) new Object[1];
    private int N = 0;

    public int size() {
        return N;
    }

    public boolean isEmpty() {
        return N == 0;
    }

    private void resize(int newSize) {
        Item[] temp = (Item[]) new Object[newSize];
        for (int i = 0; i < N; i++) {
            temp[i] = array[i];
        }
        array = temp;
    }

	// @description - push new element to stack
	// O(n) ~ n
	public void push(Item item) {
        if (N == array.length) {
            resize(2*array.length);
        }
        array[N++] = item;
	}

    public Item pop() {
        Item item = array[N--];
        array[N] = null;
        if (N > 0 && N == array.length/4) {
            resize(array.length / 2);
        }
        return item;
    }
    // TODO: Implement iterator
}
