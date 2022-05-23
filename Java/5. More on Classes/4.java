class Animal3 {
    public void makeSound() {
        System.out.println("Grr...");
    }
}

class Cat extends Animal3 {
    public void makeSound() {
        System.out.println("Meow");
    }
}

class OverridingAndOverloading {
    public static int max(int a, int b) {
        if (a > b)
            return a;
        return b;
    }

    public static double max(double a, double b) {
        if (a > b)
            return a;
        return b;
    }

    /*
     * Method Overriding (is also known as runtime polymorphism):
     * - Should have the same return type and arguments
     * - The access level cannot be more restrictive than the overridden method's
     * access level (superclass public so subclass can be only public)
     * - A method declared final or static cannot be overridden
     * - If a method cannot be inherited, it cannot be overridden
     * - Constructors cannot be overridden
     * 
     * 
     * Method Overloading (compile-time polymorphism) - when methods have the same
     * name, but different parameters.
     * This can be very useful when you need the same method functionality for
     * different types of parameters.
     * An overloaded method must have a different argument list; the parameters
     * should differ in their type, number, or both.
     */
    public static void main(String[] args) {
        Cat c = new Cat();
        c.makeSound();

        int i1 = 1, i2 = 2;
        System.out.println(max(i1, i2));

        double d1 = 3.0, d2 = 4.0;
        System.out.println(max(d1, d2));
    }
}
