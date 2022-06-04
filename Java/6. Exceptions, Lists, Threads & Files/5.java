import java.util.ArrayList;

class ArrayListAPI {
    /*
     * The Java API provides special classes to store and manipulate groups of
     * objects.
     * ArrayLists store objects.
     * ArrayLists are created with an initial size, but when this size is exceeded,
     * the collection is automatically enlarged.
     * When objects are removed, the ArrayList may shrink in size.
     * 
     * ArrayList name = new ArrayList();
     * 
     * Capacity and type of objects are optional.
     * 
     * ArrayList<String> colors = new ArrayList<String>(10);
     * 
     * Methods:
     * - add(): Adds new objects to the ArrayList
     * - remove(): Removes objects from the ArrayList
     * - contains(): Returns true if the list contains the specified element
     * - get(int index): Returns the element at the specified position in the list
     * - size(): Returns the number of elements in the list
     * - clear(): Removes all of the elements from the list
     */
    public static void main(String[] args) {
        ArrayList<String> colors = new ArrayList<String>();
        colors.add("Red");
        colors.add("Blue");
        colors.add("Green");
        colors.add("Orange");
        colors.remove("Green");

        System.out.println(colors);
    }
}
