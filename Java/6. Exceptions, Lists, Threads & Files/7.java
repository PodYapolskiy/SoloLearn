import java.util.HashMap;

class HashMapAPI {
    /*
     * HashMap is used for storing data collections as key and value pairs.
     * One object is used as a key (index) to another object (the value).
     * - put(): Puts new objects in the HashMap
     * - remove(): Removes objects from the HashMap
     * - get(key): Returns the value of the given key (null if value doesn't exist).
     * 
     * A HashMap cannot contain duplicate keys.
     * Adding a new item with a key that already exists overwrites the old element.
     * 
     * - containsKey(): Determines the presence of a specified key.
     * - containsValue(): Determines the presence of a specified value.
     */
    public static void main(String[] args) {
        HashMap<String, Integer> points = new HashMap<String, Integer>();
        points.put("Amy", 154);
        points.put("Dave", 42);
        points.put("Rob", 733);

        System.out.println(points);
        System.out.println(points.get("Amy"));
    }
}
