// Functions
#include <stdio.h>

#define global_1 "Hello"

char global_2[6] = "world!";

/* declaration */
int square(int num); // Function prototype

/* definition */
int square(int num)
{
    int y = num * num;
    return y;
}

// Function does not change 'x', 'y' values out of scope
int sum_up(int x, int y)
{
    return x + y;
}

int main()
{
    // Functions
    // return_type function_name(parameters);
    int x, y, result;

    x = 5;
    result = square(x);
    printf("%d squared is %d\n", x, result);

    x = 3;
    y = 12;
    result = sum_up(x, y);
    printf("%d + %d = %d\n", x, y, result);

    // Variable scope
    printf("%s %s", global_1, global_2); // Both variables are global
    
    return 0;
}