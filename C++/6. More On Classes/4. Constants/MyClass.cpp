#include <iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass() {}

// Now the myPrint() function is a constant member function
// It can be called by our constant object
void MyClass::myPrint() const { cout << "Hello" << endl; }

int main()
{
    /*
            Constants
        A constant is an expression with a fixed value. It cannot be changed while the program is running.
        All constant variables must be initialized at the time of their creation.
    */
    const int x = 42;

    /*
            Constant Objects
        All const variables must be initialized when they're created.
        In the case of classes, this initialization is done via constructors.
        If a class is not initialized using a parameterized constructor, a public default constructor must be provided - if no public default constructor is provided, a compiler error will occur.
        When you've used const to declare an object, you can't change its data members during the object's lifetime.

        Only non-const objects can call non-const functions.
        A constant object can't call regular functions.

        Compiler error is generated when any const member function attempts to change a member variable or to call a non-const member function.
        Defining constant objects and functions ensures that corresponding data members cannot be unexpectedly modified.
    */
    const MyClass obj;
    obj.myPrint();

    MyClass obj2;
    obj2.myPrint(); // Doesn't cause any error

    return 0;
}