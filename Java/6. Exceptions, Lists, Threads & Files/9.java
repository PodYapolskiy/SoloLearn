import java.util.ArrayList;
import java.util.Collections;

class SortingLists {
    /*
     * Java API provides a Collections class for manipulation of data in different
     * collection types.
     * 
     * - max(Collection c): Returns the maximum element in c as determined by
     * natural ordering.
     * - min(Collection c): Returns the minimum element in c as determined by
     * natural ordering.
     * - reverse(List list): Reverses the sequence in list.
     * - shuffle(List list): Shuffles (i.e., randomizes) the elements in list.
     */
    public static void main(String[] args) {
        ArrayList<String> animals = new ArrayList<String>();

        animals.add("tiger");
        animals.add("cat");
        animals.add("snake");
        animals.add("dog");

        System.out.println(animals);
        Collections.sort(animals); // Sorts the elements of collection type
        System.out.println(animals);
        System.out.println();

        // Works with different types
        ArrayList<Integer> numbers = new ArrayList<Integer>();
        numbers.add(3);
        numbers.add(36);
        numbers.add(73);
        numbers.add(40);
        numbers.add(1);

        System.out.println(numbers);
        Collections.sort(numbers);
        System.out.println(numbers);
    }
}
