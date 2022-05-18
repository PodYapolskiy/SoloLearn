public class MathClass {
    /*
     * JDK provides the Math class predefined methods for mathematical operations:
     * Math.abs() returns the absolute value of its parameter.
     * Math.ceil() rounds a floating point value up to the nearest integer value.
     * Math.floor() rounds a floating point value down to the nearest integer value.
     * Math.max() returns the largest of its parameters.
     * Math.min() returns the smallest parameter.
     * Math.pow() returns the first param raised to the power of the second param.
     * ...
     */
    public static void main(String[] args) {
        int a = Math.abs(10);
        int b = Math.abs(-20);
        System.out.println(a);
        System.out.println(b);

        double c = Math.ceil(3.1415);
        System.out.println(c);

        double d = Math.floor(3.14);
        System.out.println(d);

        int e = Math.max(10, 20);
        System.out.println(e);

        int f = Math.min(10, 20);
        System.out.println(f);

        double g = Math.pow(2, 3);
        System.out.println(g);
    }
}
