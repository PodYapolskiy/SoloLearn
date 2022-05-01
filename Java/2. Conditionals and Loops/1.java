class ConditionalStatements {
    /*
     * Conditional statements are used to perform different actions based on
     * different conditions.
     * 
     * Signs:
     * < - less than
     * > - greater than
     * != - not equal to
     * == - equal to
     * <= - less than or equal to
     * >= - greater than or equal to
     * 
     * Logical Operators:
     * && - AND
     * || - OR
     * ! - NOT
     */
    public static void main(String[] args) {
        int age = 25;
        if (age <= 0) {
            System.out.println("Error");
        } else if (age <= 16) {
            System.out.println("Too Young");
        } else if (age < 100) {
            if (age > 60)
                System.out.println("Welcome, boomer!");
            else
                System.out.println("Welcome!");
        } else {
            System.out.println("Really?");
        }
    }
}
