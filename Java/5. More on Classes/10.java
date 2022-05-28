class Robot {
    int id;

    Robot(int i) {
        id = i;
        Brain b = new Brain();
        b.think();
    }

    // Class can access all of the member variables and methods of its outer class
    // but it cannot be accessed from any outside class
    private class Brain {
        public void think() {
            System.out.println(id + " is thinking");
        }
    }
}

class InnerClasses {
    /*
     * Java supports nesting classes; a class can be a member of another class.
     * 
     * Unlike a class, an inner class can be private.
     * Once you declare an inner class private, it cannot be accessed from an object
     * outside the class.
     */
    public static void main(String[] args) {
        Robot r = new Robot(5);
        System.out.println(r.id);
    }
}
