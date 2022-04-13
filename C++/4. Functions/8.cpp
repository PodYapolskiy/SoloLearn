// Function Arguments
#include <iostream>
using namespace std;

void myFunc(int x) { x = 100; } // Passing by value

void myFunc(int *x) { *x = 100; } // Passing by reference

int main()
{
    /*
                    Function Arguments
                Two ways of passing arguments to a function:

            By value:
        This method copies the argument's actual value into the function's formal parameter.
        Here, we can make changes to the parameter within the function without having any effect on the argument.

            By reference:
        This method copies the argument's reference into the formal parameter.
        Within the function, the reference is used to access the actual argument used in the call.
        This means that any change made to the parameter affects the argument.

        By default, C++ uses call by value to pass arguments.

        In general, passing by value is faster and more effective.
        Pass by reference when your function needs to modify the argument, or when you need to pass a data type, that uses a lot of memory and is expensive to copy.
    */
    int var = 20;
    myFunc(var);
    cout << var << endl;

    myFunc(&var);
    cout << var;

    return 0;
}