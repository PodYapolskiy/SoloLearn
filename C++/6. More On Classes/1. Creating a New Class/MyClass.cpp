#include "MyClass.h"

// Basically, MyClass::MyClass() refers to the MyClass() member function - or, in this case, constructor - of the MyClass class
MyClass::MyClass()
{
    // ctor
}

int main()
{
    /*
            Resolution Operator
        The double colon is called the scope resolution operator.
        It's used for the constructor definition.
        The scope resolution operator is used to define a particular class' member functions, which have already been declared.
        We defined the constructor prototype in the header file.
    */
    MyClass obj;

    return 0;
}