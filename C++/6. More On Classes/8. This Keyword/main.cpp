// This Keyword
#include <iostream>
using namespace std;

class MyClass
{
    public:
        MyClass(int a) : var(a) {}

        void printInfo()
        {
            // All three of the ways to access the member variable work
            cout << var << endl;
            cout << this->var << endl;
            cout << (*this).var << endl;
        }

    private:
        int var;
};

int main()
{
    /*
            This
        Every object in C++ has access to its own address through an important pointer called the this pointer.
        Inside a member function this may be used to refer to the invoking object.
        Friend functions do not have a this pointer, because friends are not members of a class.

        this is a pointer to the object
        arrow selection operator is used to select the member variable

        Only member functions have a this pointer.
        The this keyword has an important role in operator overloading.
    */
    MyClass obj(42);
    obj.printInfo();

    return 0;
}