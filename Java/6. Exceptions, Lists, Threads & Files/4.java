class RuntimeVsCheckedExceptions {
    /*
     * There are two exception types, checked and unchecked (also called runtime):
     * - Checked exceptions are checked while compilation.
     * - Unchecked exceptions are checked at runtime.
     */
    public static void main(String[] args) {
        // Thread.sleep(1000); - code won't compile until we've handled the exception
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println("InterruptedException occured.");
        }

        int value = 7;
        // Example of unchecked exception
        value = value / 0; // ArithmeticException is thrown
    }
}
