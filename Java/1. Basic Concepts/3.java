import java.util.Scanner;

class UserInput {
    /*
     * Read a byte - nextByte()
     * Read a short - nextShort()
     * Read an int - nextInt()
     * Read a long - nextLong()
     * Read a float - nextFloat()
     * Read a double - nextDouble()
     * Read a boolean - nextBoolean()
     * Read a complete line - nextLine()
     * Read a word - next()
     */
    public static void main(String[] args) {
        Scanner myVar = new Scanner(System.in); // Create instance of the class
        String myInput = myVar.nextLine();

        System.out.println(myInput);
        myVar.close();
    }
}
