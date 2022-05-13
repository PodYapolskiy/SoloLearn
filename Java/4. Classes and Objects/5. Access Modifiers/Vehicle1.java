public class Vehicle1 {
    private int maxSpeed;
    private int wheels;
    private String color;
    private double fuelCapacity;

    public void horn() {
        System.out.println("Beep!");
    }

    public int getMaxSpeed() {
        return maxSpeed;
    }

    public int getWheels() {
        return wheels;
    }

    public String getColor() {
        return color;
    }

    public double getFuelCapacity() {
        return fuelCapacity;
    }

}

class AccessModifiers {
    /*
     * public - access modifier, meaning that it is used to set the level of access.
     * 
     * Access modifiers can be used for classes, attributes, and methods.
     * 
     * 
     * Classes
     * public: The class is accessible by any other class.
     * default: The class is accessible only by classes in the same package.
     * 
     * 
     * Attributes
     * default:
     * Available to any other class in the same package.
     * 
     * public:
     * Accessible from any other class.
     * 
     * protected:
     * Provides the same access as the default access modifier, with the
     * addition that subclasses can access protected methods and variables of the
     * superclass.
     * 
     * private:
     * Accessible only within the declared class itself.
     */
    public static void main(String[] args) {}
}
