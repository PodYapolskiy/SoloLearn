// Operators
#include <stdio.h>

int main()
{
    int f = 5, s = 2;
    printf("5 + 2 = %d\n", f + s);
    printf("5 - 2 = %d\n", f - s);
    printf("5 * 2 = %d\n", f * s);
    printf("5 / 2 = %d\n", f / s);
    printf("5 %% 2 = %d\n", f % s);

    int x = 23, y = 4;

    // Type casting
    float sum = (float)x / y; // only this ay can get float after divide int on int
    printf("%f\n", sum);

    // Assignment Operators
    x += y;
    x -= y;
    x *= y;
    x /= y;
    x %= y;

    // Increment & Decrement
    /*
        prefix (--z) increments/decrements the variable and then uses it in the assignment statement
        postfix (++z) uses the value of the variable first, before incrementing/decrementing it
    */
    int z = 10;
    z--;
    printf("%d\n", z);
    z++;
    printf("%d\n\n", z);

    z = 3;
    x = z--; // assign 3 to x, then decrement z to 2
    printf("x=%d z=%d \n", x, z);

    y = 3;
    x = ++y; // increment y to 4, then assign 4 to x
    printf("x=%d y=%d\n", x, y);

    return 0;
}