class Arrays {
    /*
     * An array is a collection of variables of the same type.
     * 
     * Declare an array of integers:
     * int[ ] arr;
     * 
     * Square brackets placed after the array name also works, but the preferred way
     * is to place the brackets after the array's data type.
     */
    public static void main(String[] args) {
        int[] arr = new int[5];
        // int arr[] = new int[5]; - Similar to line above
        arr[2] = 42;

        // Java provides a shortcut for instantiating arrs of primitive types and strs
        String[] myNames = { "A", "B", "C", "D" };
        System.out.println(myNames.length);

        int[] myArr = { 6, 42, 3, 7 };
        int sum = 0;
        for (int i = 0; i < myArr.length; i++) {
            sum += myArr[i];
        }
        System.out.println(sum);

        // Enhanced for loop / for each loop
        int[] primes = { 2, 3, 5, 7 };
        for (int number : primes) {
            System.out.print(number);
            System.out.print(" ");
        }
    }
}