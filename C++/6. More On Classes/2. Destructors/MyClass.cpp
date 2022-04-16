#include "MyClass.h"

#include <iostream>
using namespace std;

MyClass::MyClass()
{
    cout << "Constructor" << endl;
}

MyClass::~MyClass()
{
    cout << "Destructor" << endl;
}

int main()
{
    /*
            Destructors
        Destructors are special functions which are called when an object is destroyed or deleted.
        Objects are destroyed when they go out of scope or delete expression is applied to a pointer directed at an object of a class.
        Destructor can't return a value or take any parameters.
        Destructors can be very useful for releasing resources before coming out of the program.
        Since destructors can't take parameters, they also can't be overloaded.
        Each class will have just one destructor.
    */
    MyClass obj; // Creates an object and calls the constructor

    return 0; // Object is deleted and the destructor is called when the program's execution is completed
}
