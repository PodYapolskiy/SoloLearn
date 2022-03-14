// Data Types
#include <stdio.h>

#define PI_2 3.14 // Macros, preprocessor directive

int main()
{
    printf("int: %d\n", sizeof(int));       // 4
    printf("float: %d\n", sizeof(float));   // 4
    printf("double: %d\n", sizeof(double)); // 8
    printf("char: %d\n", sizeof(char));     // 1

    // Variables
    int my_var;  // Declaration
    my_var = 42; // Initialize

    int a, b; // Multiple declaration
    float salary = 56.23;
    char letter = 'Z';
    a = 8;
    b = 34;
    int c = a + b;

    printf("%d\n", c);
    printf("%f\n", salary);
    printf("%c\n", letter);

    // Constants
    const double PI = 3.141592653589793;
    printf("%f\n", PI);

    printf("%f\n", PI_2);

    /*
        Difference between const and #define:
    When #define: the final code sent to the compiler will already have the constant values in place.

    const uses memory for storage
    #define doesn't use memory
    */

    return 0;
}