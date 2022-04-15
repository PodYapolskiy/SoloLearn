// Creating a New Class
#ifndef MYCLASS_H
#define MYCLASS_H

/*
        Creating a New Class
    It is a good practice to define new classes in separate files.
    This makes maintaining and reading the code easier.

    MyClass.h is the header file.
    MyClass.cpp is the source file.


        Source & Header
    The header file (.h) holds the function declarations (prototypes) and variable declarations.
    It currently includes a template for our new MyClass class, with one default constructor

    The implementation of the class and its methods go into the source file (.cpp).
    Currently it includes just an empty constructor.

        Main Difference
    The header declares "what" a class (or whatever is being implemented) will do, while the cpp source file defines "how" it will perform those features.
*/

class MyClass
{
    public:
        MyClass();

    protected:
    private:
};

#endif // MYCLASS_H