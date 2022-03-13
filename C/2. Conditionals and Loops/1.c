// Conditions
#include <stdio.h>

int main()
{
    int z = 5;
    if (z > 4)
    {
        printf("%d", z);
    }

    int in_stock = 1;                // Integers can be land in boolean. Every integer except "0" is true
    if (in_stock)                    // If only one statement, "{}" aren't necessary
        printf("Order received.\n"); // Can be without "{}" braces

    int score = 89;
    if (score >= 90)
        printf("%s", "Top 10%%.\n");
    else if (score >= 80)
        printf("%s", "Top 20%%.\n");
    else if (score > 75)
        printf("%s", "You passed.\n");
    else
        printf("%s", "You did not pass.\n");

    // Conditional Expressions "?:"
    int y, x = 3;
    y = (x >= 5) ? 5 : x;
    printf("x = %d, y = %d", x, y);

    // Switch
    /*
        switch (expression) {
            case val1:
                statements
                break;
            case val2:
                statements
                break;
            default:
                statements
        }
    */
    int num = 3;
    switch (num)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break;
    case 3:
        printf("Three\n");
        break;
    default:
        printf("Not 1, 2, or 3.\n");
    }

    // Logical Operators
    /*
        && - logical AND
        || - logical OR
        ! - logical NOT
    */
    int n = 42;
    if (n > 0 && n <= 100 || !(n > 25 && n < 75))
        printf("Complex condition\n");

    return 0;
}