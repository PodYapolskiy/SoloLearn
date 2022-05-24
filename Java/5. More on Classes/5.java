abstract class Anim {
    int legs = 0;

    abstract void makeSound();
}

class Fish {
    public void makeSound() {
        System.out.println("...");
    }
}

class AbstractClasses {
    /*
     * Data abstraction provides the outside world with only essential information,
     * in a process of representing essential features without including
     * implementation details.
     * 
     * The concept of abstraction is that we focus on essential qualities, rather
     * than the specific characteristics of one particular example.
     * In Java, abstraction is achieved using abstract classes and interfaces.
     * 
     * Abstract class:
     * - Can not be instantiated
     * - To use an abstract class, you have to inherit it from another class
     * - Any class that contains an abstract method should be defined as abstract
     * 
     * An abstract method is a method that is declared without an implementation
     * (without braces, and followed by a semicolon)
     * "abstract void walk();"
     * 
     * We create abstract methods when there is no meaningful definition for the
     * method in the superclass.
     */
    public static void main(String[] args) {
        Fish fish = new Fish();
        fish.makeSound();
    }
}
