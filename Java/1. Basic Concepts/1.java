class HelloWorld {
    /*
     * Every program in Java must have a class.
     * Every Java program starts from the main method.
     * 
     * - public: anyone can access it
     * - static: method can be run without creating an instance of the class
     * containing the main method
     * - void: method doesn't return any value
     * 
     * In classes, methods, and other flow-control structures code is always
     * enclosed in curly braces { }
     */
    /**
     * Javadoc is used for generating Java code documentation in HTML format from
     * Java source code which has required documentation in a predefined format.
     */
    public static void main(String[] args) {
        System.out.println("Hello world!"); // The System class and its out stream are used to access the println method
    }
}