public class Vehicle2 {
    private String color;

    // Getter
    public String getColor() {
        return this.color;
    }

    // Setter
    public void setColor(String color) {
        this.color = color; // The keyword this is used to refer to the current object
    }
}

class GettersAndSetters {
    /*
     * Getters and Setters are used to effectively protect your data, particularly
     * when creating classes.
     * 
     * get method returns its value
     * set method sets the value
     * 
     * Getters and setters are fundamental building blocks for encapsulation.
     */
    public static void main(String[] args) {
        Vehicle2 v = new Vehicle2();
        v.setColor("Red");
        System.out.println(v.getColor());
    }
}
