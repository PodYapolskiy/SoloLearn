interface IAnim {
    public void eat();

    public void makeSound();
}

class Kitten implements IAnim {
    public void eat() {
        System.out.println("omnomnom");
    }

    public void makeSound() {
        System.out.println("meow");
    }
}

class Interfaces {
    /*
     * Interface is a completely abstract class that contains only abstract methods.
     * 
     * Specifications:
     * - Defined using the interface keyword
     * - May contain only static final variables
     * - Can not contain a constructor because interfaces cannot be instantiated
     * - Interfaces can extend other interfaces
     * - A class can implement any number of interfaces
     * 
     * Interfaces have the following properties:
     * - An interface is implicitly abstract (don't need to use abstract keyword)
     * - Each method in an interface is also implicitly abstract (similarly)
     * - Methods in an interface are implicitly public
     * 
     * A class can inherit from just one superclass, but can implement multiple
     * interfaces.
     * 
     * When you implement an interface, you need to override all of its methods.
     */
    public static void main(String[] args) {
        Kitten kitten = new Kitten();
        kitten.eat();
    }
}
