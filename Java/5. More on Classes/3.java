class Animal2 {
    public void makeSound() {
        System.out.println("Grr...");
    }
}

class Cat2 extends Animal2 {
    public void makeSound() {
        System.out.println("Meow");
    }
}

class Dog2 extends Animal2 {
    public void makeSound() {
        System.out.println("Woof");
    }
}

class Polymorphism {
    /*
     * Polymorphism occurs when there is a hierarchy of classes related to each
     * other through inheritance.
     */
    public static void main(String[] args) {
        // We've created two reference variables of type Animal, and pointed them to the
        // Cat and Dog objects
        Animal2 dog = new Dog2();
        Animal2 cat = new Cat2();

        // We can use the Animal variable without actually knowing that it contains an
        // object of the subclass
        // This is very useful when you have multiple subclasses of the superclass
        dog.makeSound(); // Contains a Dog object, so Dog class's method is called
        cat.makeSound();
    }
}
