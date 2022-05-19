class Counter {
    // Gets incremented each time a new object of the Counter class is created
    public static int COUNT = 0; // COUNT will be shared by all objects of that class

    Counter() {
        COUNT++;
    }

    public static void count() {
        System.out.println("counting...");
    }
}

public class Static {
    /*
     * Static method belongs to the class, rather than to a specific instance.
     * This means that only one instance of a static member exists, even if you
     * create multiple objects of the class, or if you don't create any.
     * It will be shared by all objects.
     * 
     * It’s a common practice to use upper case when naming a static variable
     * 
     * The same concept applies to static methods.
     * The main method must always be static
     */
    public static void main(String[] args) {
        // Static variables
        Counter c1 = new Counter();
        Counter c2 = new Counter();
        System.out.println(Counter.COUNT); // 2

        // It can also be accessed using any Counter object
        System.out.println(c1.COUNT);
        System.out.println(c2.COUNT);

        // Static methods
        Counter.count();

        // It can also be accessed using any Counter object
        c1.count();
        c2.count();
    }
}
