/*
        The #include Directive
    The #include directive is for including header files in a program.
    A header file declares a collection of functions and macros for a library.

    stdio  - input/output functions, including printf and file operations.
    stdlib - memory management and other utilities
    string - functions for handling strings
    errno  - errno global variable and error code macros
    math   - common mathematical functions
    time   - time/date utilities

    Corresponding header files for the libraries end with .h by convention.
    The #include directive expects brackets <> around the header filename if the file should be searched for in the compiler include paths.
*/
#include <stdio.h>

// A user-defined header file is also given the .h extension, but is referred to with quotation marks
#include "1.h"

/*
        The #define Directive
    The #define directive is used to create object-like macros for constants based on values or expressions.
    #define can also be used to create function-like macros with arguments that will be replaced by the preprocessor.
    Keep in mind that the preprocessor does a direct replacement without any calculations, which can lead to unexpected results.
*/
#define PI 3.14
#define AREA(r) (PI * r * r)
// #define AREA(r) (PI * (r) * (r)) // The solution to this is to enclose each parameter in parentheses to obtain the correct order of operations

int main()
{
    /*
        Before compilation, the preprocessor expands every macro identifier.
        In this case, every occurrence of PI is replaced with 3.14 and AREA(arg) is replaced with the expression PI*arg*arg.
        The final code sent to the compiler will already have the constant values in place.
    */
    float radius = 2;
    printf("%3.2f\n", PI);
    printf("Area is %5.2f\n", AREA(radius));
    printf("Area with radius + 1: %5.2f\n", AREA(radius + 1)); // Not what we may expect!
    // However, if you consider that #define works strictly by replacing text, you will see that AREA(radius+1) becomes PI*radius+1*radius+1, which is 3.14*2+1*2+1

    return 0;
}