class DoWhileLoop {
    /*
     * A do...while loop is similar to a while loop, except that a do...while loop
     * is guaranteed to execute at least one time.
     */
    public static void main(String[] args) {
        int x = 1;
        do {
            System.out.println(x);
            x++;
        } while (x < 5);
    }
}
