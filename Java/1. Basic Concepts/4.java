class Operators {
    public static void main(String[] args) {
        // Primitive Operators
        int x = 7, y = 5;
        int i1, i2, i3, i4, i5;

        i1 = x + y; // 12
        i2 = x - y; // 2
        i3 = x * y; // 35
        i4 = x / y; // 1
        i5 = x % y; // 2

        System.out.print("i1 = 7 + 5 = ");
        System.out.println(i1);
        System.out.print("i2 = 7 - 5 = ");
        System.out.println(i2);
        System.out.print("i3 = 7 * 5 = ");
        System.out.println(i3);
        System.out.print("i4 = 7 / 5 = ");
        System.out.println(i4);
        System.out.print("i5 = 7 % 5 = ");
        System.out.println(i5);
        System.out.println();

        // Increment & Decrement
        int z = 14;
        System.out.println(z++); // Prints z (14) and increments to 15
        System.out.println(++z); // Increments z to 16 and prints it
        System.out.println();

        // Assignment and operation
        z += 2; // 18
        z -= 1; // 17
        z *= 2; // 34
        z /= 3; // 11
        z %= 4; // 3
        System.out.println(z);
    }
}
