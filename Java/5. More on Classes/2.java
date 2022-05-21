class Animal1 {
    protected int legs;// protected access modifier makes the members visible only to the subclasses

    public void eat() {
        System.out.println("Animal1 eats");
    }
}

// Dog is the subclass, and Animal is the superclass
class Dog extends Animal1 {
    Dog() {
        legs = 4;
    }
}

class A {
    protected int var = 3;

    A() {
        System.out.println("New A");
    }
}

class B extends A {
    B() {
        System.out.println("New B");
    }

    // Using the super keyword we can access the superclass from the subclass
    public void printVar() {
        System.out.println(super.var);
    }
}

class Inheritance {
    /*
     * Inheritance is the process that enables one class to acquire the properties
     * (methods and variables) of another.
     * 
     * The class inheriting the properties of another is the subclass. (derived or
     * child class)
     * The class whose properties are inherited is the superclass (base or parent
     * class)
     * 
     * When one class is inherited from another class, it inherits all of the
     * superclass' non-private variables and methods. (public and protected)
     * 
     * 
     * Constructors are not member methods, and so are not inherited by subclasses.
     * However, the constructor of the superclass is called when the subclass is
     * instantiated.
     */
    public static void main(String[] args) {
        Dog dog = new Dog();
        dog.eat();
        System.out.println(dog.legs);

        B obj = new B();
        obj.printVar();
    }
}
