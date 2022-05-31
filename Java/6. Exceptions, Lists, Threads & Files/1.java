class ErrorHandling {
    /*
     * Exception handling is a powerful mechanism that handles runtime errors to
     * maintain normal application flow.
     * 
     * try {
     *      // some code
     * } catch (Exception e) {
     *      // some code to handle errors
     * }
     * 
     * Catch statement involves declaring the type of exception you are trying to
     * catch.
     */
    public static void main(String[] args) {
        try {
            int a[] = new int[2];
            System.out.println(a[5]);
        } catch (Exception e) {
            System.out.println("An error occurred");
        }
    }
}
