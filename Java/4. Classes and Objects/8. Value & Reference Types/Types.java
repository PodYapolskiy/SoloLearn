class Person {
    private String name;
    private int age;

    Person(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }
}

public class Types {
    static void addOneTo(int num) {
        num = num + 1;
    }

    // Method takes a Person object as its parameter, and increments its attribute
    static void celebrateBirthday(Person p) {
        p.setAge(p.getAge() + 1);
    }

    /*
     * Value types store the values assigned to them in the corresponding memory
     * locations:
     * - byte
     * - short
     * - int
     * - long
     * - float
     * - double
     * - boolean
     * - char
     * 
     * When passing these variables to a method, we operate on the value, rather
     * than on the variable itself.
     * 
     * 
     * Reference Types store a reference (or address) to the memory location where
     * corresponding data is stored:
     * - Objects
     * - Arrays
     * - Strings
     * 
     * When you create an object using the constructor, you create a reference
     * variable.
     */
    public static void main(String[] args) {
        // Value Types
        int x = 5;
        addOneTo(x);
        System.out.println(x);
        System.out.println();

        // Reference Types
        Person p; // p is a reference type
        p = new Person("John");
        p.setAge(20);
        // The method affects the object itself and it's able to change the actual value
        // of object's attribute.
        celebrateBirthday(p);
        System.out.println(p.getAge());
    }
}
