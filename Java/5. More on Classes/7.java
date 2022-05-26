class TypeCasting {
    /*
     * Assigning a value of one type to a variable of another type is known as Type
     * Casting.
     * To cast a value to a specific type, place the type in parentheses and
     * position it in front of the value.
     * 
     * Java supports automatic type casting of integers to floating points, since
     * there is no loss of precision.
     */
    public static void main(String[] args) {
        double d = 42.571;
        int i = (int) d;
        System.out.println(i);
    }
}
