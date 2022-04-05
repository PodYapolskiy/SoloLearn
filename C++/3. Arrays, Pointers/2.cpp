// Pointers
#include <iostream>
using namespace std;

int main()
{
    /*
            Pointers
        Every variable is a memory location, which has its address defined.

        (&) operator can be used to access the address of a variable (also called the address-of operator)

        A pointer is a variable, with the address of another variable as its value.
        All pointers share the same data type - a long hexadecimal number that represents a memory address.
    */
    int score = 5;
    cout << &score << endl;

    // The asterisk sign is used to declare a pointer
    int *ip;    // pointer to an integer
    float *fp;  // pointer to a float
    double *dp; // pointer to a double
    char *ch;   // pointer to a character

    int *scorePtr;
    scorePtr = &score;
    cout << scorePtr << "\n\n";

    /*
            Pointer Operations
        Address-of  (or address-of operator)  (&): returns the memory address of its operand.
        Contents-of (or dereference) operator (*): returns the value of the variable located at the address specified by its operand.

            Difference between "type *name" and "cout << *scorePtr" usage of "*"
        The asterisk (*) is used in declaring a pointer for the simple purpose of indicating that it is a pointer (The asterisk is part of its type compound specifier).
        Don't confuse this with the dereference operator (*), which is used to obtain the value located at the specified address.
        They are simply two different things represented with the same sign.
    */
    int var = 50;
    int *p;
    p = &var;

    cout << "var = " << var << endl; // 50        (the value of var)
    cout << "p = " << p << endl;     // 0xhexcode (var's memory location)
    cout << "*p = " << *p << endl;   // 50        (the value of the variable that pointer points to)

    int x = 5;
    int *ptr = &x;

    // Next three lines do the same thing
    x = x + 4;
    x = *p + 4;
    *p = *p + 4;

    return 0;
}