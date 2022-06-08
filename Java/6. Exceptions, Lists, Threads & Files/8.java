import java.util.HashSet;

class HashSetAPI {
    /*
     * A Set is a collection that cannot contain duplicate elements.
     * It models the mathematical set abstraction.
     * each element in the HashSet is associated with its unique hash code.
     * 
     * The HashSet class does not automatically retain the order of the elements as
     * they're added.
     * To order the elements, use a LinkedHashSet, which maintains a linked list of
     * the set's elements in the order in which they were inserted.
     */
    public static void main(String[] args) {
        HashSet<String> set = new HashSet<String>();
        set.add("A");
        set.add("B");
        set.add("A"); // Repeats value

        System.out.println(set);
        System.out.println(set.size());
    }
}
