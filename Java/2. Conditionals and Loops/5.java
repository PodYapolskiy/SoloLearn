class ForLoop {
    /*
     * A for loop allows you to efficiently write a loop that needs to execute a
     * specific number of times.
     * 
     * for (initialization; condition; increment/decrement) {
     *      statement(s)
     * }
     * 
     * Initialization - Expression executes only once during the beginning of loop.
     * Condition - Is evaluated each time the loop iterates. The loop executes the
     * statement repeatedly, until this condition returns false.
     * Increment/Decrement - Executes after each iteration of the loop.
     */
    public static void main(String[] args) {
        for (int x = 1; x <= 5; x++) {
            System.out.println(x);
        }
    }
}
