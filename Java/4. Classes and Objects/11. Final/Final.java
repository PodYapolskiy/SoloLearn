public class Final {
    // PI is now a constant
    public static final double PI = 3.14; // Any attempt to assign it a value will cause an error

    /*
     * The final keyword mark a variable constant, so that it can be assigned
     * only once.
     * 
     * Methods and classes can also be marked final.
     * This serves to restrict methods so that they can't be overridden and classes
     * so that they can't be subclassed.
     */
    public static void main(String[] args) {
        // PI = 2.2; - cause error
        System.out.println(PI);
    }
}
