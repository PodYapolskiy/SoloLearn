class MultipleExceptions {
    static int div(int a, int b) throws ArithmeticException {
        if (b == 0) {
            // Throws the corresponding exception, along with a custom message
            throw new ArithmeticException("Division by Zero");
        } else {
            return a / b;
        }
    }

    /*
     * The throw keyword allows you to manually generate exceptions from your
     * methods.
     * 
     * The throws statement in the method definition defines the type of
     * Exception(s) the method can throw.
     * Multiple exceptions can be defined in the throws statement using a
     * comma-separated list.
     * 
     * 
     * Multiple catch blocks that handle different exceptions separately:
     * 
     * try {
     *      // some code
     * } catch (ExceptionType1 e1) {
     *      // catch block
     * } catch (ExceptionType2 e2) {
     *      // catch block
     * } catch (ExceptionType3 e3) {
     *      // catch block
     * }
     * 
     * All catch blocks should be ordered from most specific to most general.
     */
    public static void main(String[] args) {
        System.out.println(div(42, 0));
    }
}
