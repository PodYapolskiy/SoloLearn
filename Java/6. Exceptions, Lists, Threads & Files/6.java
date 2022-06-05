import java.util.LinkedList;

class LinkedListAPI {
    /*
     * Difference between the LinkedList and the ArrayList is in the way they store
     * objects.
     * 
     * The ArrayList is better for storing and accessing data, as it is very similar
     * to a normal array.
     * The LinkedList is better for manipulating data, such as making numerous
     * inserts and deletes.
     * 
     * LinkedList stores memory address (or link) of the element that follows it.
     * 
     * Summary:
     * - Use ArrayList when you need rapid access to your data.
     * - Use LinkedList when you need to make a large number of inserts or deletes.
     */
    public static void main(String[] args) {
        LinkedList<String> colors = new LinkedList<String>();
        colors.add("Red");
        colors.add("Blue");
        colors.add("Green");
        colors.add("Orange");
        colors.remove("Green");

        for (String color : colors) {
            System.out.println(color);
        }
    }
}
