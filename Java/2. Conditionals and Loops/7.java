class LoopControl {
    /*
     * The break and continue statements change the loop's execution flow.
     * 
     * The break statement terminates the loop and transfers execution to the
     * statement immediately following the loop.
     * The continue statement makes the loop skip to its next iteration.
     */
    public static void main(String[] args) {
        int x = 1;

        while (x > 0) {
            System.out.println(x);
            if (x == 4) {
                break;
            }
            x++;
        }
        System.out.println();

        for (x = 10; x <= 40; x = x + 10) {
            if (x == 30) {
                continue;
            }
            System.out.println(x);
        }
    }
}
