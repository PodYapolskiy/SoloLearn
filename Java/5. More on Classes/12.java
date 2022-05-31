enum Rank {
    SOLDIER,
    SERGEANT,
    CAPTAIN
}

class Enums {
    /*
     * An Enum is a special type used to define collections of constants.
     * Enums define variables that represent members of a fixed set.
     * 
     * You should always use Enums when a variable (especially a method parameter)
     * can only take one out of a small set of possible values.
     * 
     * If you use Enums instead of integers (or String codes), you increase
     * compile-time checking and avoid errors from passing in invalid constants, and
     * you document which values are legal to use.
     */
    public static void main(String[] args) {
        Rank a = Rank.SOLDIER;

        switch (a) {
            case SOLDIER:
                System.out.println("Soldier says hi!");
                break;
            case SERGEANT:
                System.out.println("Sergeant says Hello!");
                break;
            case CAPTAIN:
                System.out.println("Captain says Welcome!");
                break;
        }
    }
}
