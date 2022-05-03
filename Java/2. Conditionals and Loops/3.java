class SwitchExpression {
    /*
     * Switch expression allows multiple comma-separated values per case and returns
     * a value for the whole switch-case block.
     */
    public static void main(String[] args) {
        int day = 3;

        String dayType = switch (day) {
            case 1, 2, 3, 4, 5 -> "Working day";
            case 6, 7 -> "Weekend";
            default -> "Invalid day";
        };

        System.out.println(dayType);
    }
}
