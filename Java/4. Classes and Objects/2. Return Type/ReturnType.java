public class ReturnType {
    static int sum(int val1, int val2) {
        return val1 + val2;
    }

    /*
     * When you do not need to return any value from your method, use the keyword
     * void.
     * Void keyword in the definition of the main method - this means that main does
     * not return anything.
     */
    public static void main(String[] args) {
        int summary = sum(2, 5);
        System.out.println(summary);
    }
}
