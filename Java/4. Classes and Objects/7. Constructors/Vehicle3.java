public class Vehicle3 {
    private String color;

    // Constructor without parameters
    Vehicle3() {
        this.setColor("Red");
    }

    // Constructor with ont string parameter
    Vehicle3(String c) {
        this.setColor(c);
    }

    public void setColor(String c) {
        this.color = c;
    }

    public String getColor() {
        return color;
    }
}

class Constructor {
    /*
     * Constructors are special methods invoked when an object is created and are
     * used to initialize them.
     * A constructor can be used to provide initial values for object attributes.
     * 
     * - A constructor name must be same as its class name.
     * - A constructor must have no explicit return type.
     * 
     * Java automatically provides a default constructor, so all classes have a
     * constructor, whether one is specifically defined or not.
     */
    public static void main(String[] args) {
        Vehicle3 v1 = new Vehicle3();
        Vehicle3 v2 = new Vehicle3("Green");

        System.out.println(v1.getColor());
        System.out.println(v2.getColor());
    }
}
