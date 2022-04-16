#include <iostream>
#include "MyClass.h"
using namespace std;

MyClass::MyClass() {}

void MyClass::myPrint()
{
    cout << "Hello" << endl;
}

int main()
{
    MyClass obj;
    obj.myPrint();

    MyClass *ptr = &obj; // Pointer is used to access the object's members
    ptr->myPrint();      // Arrow member selection operator (->) is used to access an object's members with a pointer
    (*ptr).myPrint();

    /*
        When working with an object, use the dot member selection operator (.).
        When working with a pointer to the object, use the arrow member selection operator (->).

        ptr-> is equal to (*ptr).
    */

    return 0;
}