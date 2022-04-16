// Selection Operator
// First pair of statements tells the program to define the MyClass header file if it has not been defined already
#ifndef MYCLASS_H // "if not defined"
#define MYCLASS_H

class MyClass
{
    public:
        MyClass();
        void myPrint(); // It's necessary to specify its return type in both the declaration and the definition
};

#endif