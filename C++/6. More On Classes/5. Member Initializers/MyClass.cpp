#include <iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass(int a, int b) : regVar(a), constVar(b)
{
    cout << regVar << endl;
    cout << constVar << endl;
}

int main()
{
    /*
            Member Initializers (constructor initializer)
        Member initialization list can be used to assign values to the member variables.
        The list begins with a colon (:), and then lists each variable to be initialized, along with the value for that variable, with a comma to separate them.
        Use the syntax variable(value) to assign values.

        The initialization list eliminates the need to place explicit assignments in the constructor body.
        Also, the initialization list does not end with a semicolon.

        The constructor is used to create the object, assigning two parameters to the member variables via the member initialization list.
        The member initialization list may be used for regular variables, and must be used for constant variables.
    */
    MyClass obj(69, 420); // Use the constructor to assign values

    return 0;
}