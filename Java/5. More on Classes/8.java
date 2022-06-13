class Animal4 {
    public void makeSound() {
        System.out.println("Grr...");
    }
}

class Cat4 extends Animal4 {
    public void makeSound() {
        System.out.println("Meow");
    }
}

class Downcasting {
    /*
     * Downcasting provides opportunity to cast an instance of a subclass to its
     * superclass.
     * 
     * Upcasting is automatic, downcasting is manual.
     */
    public static void main(String[] args) {
        // Java automatically upcasted the Cat type variable to the Animal type
        Animal4 a = new Cat4();
        a.makeSound(); // Meow

        // Casting an object of a superclass to its subclass is called downcasting
        Animal4 b = new Cat4();
        // Try to cast the variable a to the Cat type and call its makeSound() method
        ((Cat4) b).makeSound(); // Also Meow
    }
}
