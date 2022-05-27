class Machine {
    public void start() {
        System.out.println("Starting...");
    }
}

class AnonymousClasses {
    /*
     * Anonymous classes are a way to extend the existing classes on the fly.
     * 
     * The @Override annotation is used to make your code easier to understand,
     * because it makes it more obvious when methods are overridden.
     */
    public static void main(String[] args) {
        // Change the start method on the fly
        Machine m1 = new Machine() {
            @Override
            public void start() {
                System.out.println("Woooooo");
            }
        };
        m1.start();

        Machine m2 = new Machine();
        m2.start();
    }
}
