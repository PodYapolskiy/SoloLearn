class Pet {
    String name;

    Pet(String n) {
        name = n;
    }

    @Override
    public int hashCode() {
        final int prime = 31;
        int result = 1;
        result = prime * result + ((name == null) ? 0 : name.hashCode());
        return result;
    }

    @Override
    public boolean equals(Object obj) {
        if (this == obj)
            return true;
        if (obj == null)
            return false;
        if (getClass() != obj.getClass())
            return false;

        Pet other = (Pet) obj;
        if (name == null) {
            if (other.name != null)
                return false;
        } else if (!name.equals(other.name))
            return false;
        return true;
    }
}

class EqualsMethod {
    /*
     * Each object has a predefined equals() method that is used for semantical
     * equality testing.
     * 
     * The automatically generated hashCode() method is used to determine where to
     * store the object internally.
     * Whenever you implement equals, you MUST also implement hashCode.
     */
    public static void main(String[] args) {
        Pet p1 = new Pet("Bob");
        Pet p2 = new Pet("Bob");
        // Compares the references, not the object values
        System.out.println(p1 == p2); // Returns false because we have two different objects

        System.out.println(p1.equals(p2)); // Returns true as overridden method
    }
}
