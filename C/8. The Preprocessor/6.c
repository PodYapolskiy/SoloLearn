// Preprocessor Operators
#include <stdio.h>

#define TO_STR(x) #x
#define VAR(name, num) name##num

int main()
{
    /*
            The # Operator
        The # macro operator is called the stringification or stringizing operator and tells the preprocessor to convert a parameter to a string constant.
        White space on either side of the argument are ignored and escape sequences are recognized.
    */
    printf("%s\n", TO_STR(123 \\ 12));

    /*
            The ## Operator
        The ## operator is also called the token pasting operator because it appends, or "pastes", tokens together.
    */
    int x1 = 125;
    int x2 = 250;
    int x3 = 500;

    printf("%d\n", VAR(x, 3)); // VAR(x, 3) compiles to x3 and printf outputs a value of x3 var

    return 0;
}