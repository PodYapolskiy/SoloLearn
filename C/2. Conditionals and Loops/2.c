// Loops
#include <stdio.h>

int main()
{
    // While Loop
    /*
        while (expression) {
            statements
        }
    */
    int count = 1;
    while (count < 5)
    {
        printf("Count = %d\n", count);
        count++;
    }
    printf("\n");

    // Do-while Loop
    /*
        do {
            statements
        } while (expression);
    */
    do
    {
        printf("Count = %d\n", count);
        count++;
    } while (count < 9);
    printf("\n");

    // Break & Continue statements
    int num = 0;
    while (num < 100)
    {
        num++;
        if (num == 3)
            continue;
        else if (num == 5)
            break;
        printf("num = %d\n", num);
    }

    // For Loop
    /*
        for (initvalue; condition; increment) {
            statements;
        }
    */
    int i, max = 10;
    for (i = 0; i < max; i++)
        printf("%d\n", i);

    /*
        Multiple expressions
        for (x = 0, y = num; x < y; i++, y--) {
            statements;
        }
    */
    i = 5;
    for (; i < max; i++) // We can skip the initvalue, condition and/or increment
        printf("%d\n", i);

    return 0;
}