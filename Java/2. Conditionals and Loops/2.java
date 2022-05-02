class SwitchStatement {
    /*
     * Switch statement tests a variable for equality against a list of values.
     * 
     * switch (expression) {
     *      case value1 :
     *          ...
     *          break;
     *      case value2 :
     *          ...
     *          break;
     *      default :
     *          ...
     * }
     */
    public static void main(String[] args) {
        int day = 3;
        
        switch (day) {
            case 1:
                System.out.println("Monday");
                break;
            case 2:
                System.out.println("Tuesday");
                break;
            case 3:
                System.out.println("Wednesday");
                break;
            default:
                System.out.println("Weekday");
        }
    }
}
