// Protected Members
#include <iostream>
using namespace std;

class Mother
{
    public:
        void sayHi()
        {
            cout << var << endl;
        }

        void printProtected()
        {
            cout << someVar << endl;
        }

    private:
        int var = 0;

    protected:
        int someVar = 42; // someVar can be accessed by any class that is derived from the Mother class
};

class Daughter : public Mother {};

int main()
{
    /*
            Protected Members
        A protected member variable or function is very similar to a private member, with one difference - it can be accessed in the derived classes.


            Type of Inheritance
        Access specifiers are also used to specify the type of inheritance.
        If no access specifier is used when inheriting classes, the type becomes private by default.

            Public:
        Public members of the base class become public members of the derived class and protected members of the base class become protected members of the derived class.
        A base class's private members are never accessible directly from a derived class, but can be accessed through calls to the public and protected members of the base class.

            Protected:
        Public and protected members of the base class become protected members of the derived class.

            Private:
        Public and protected members of the base class become private members of the derived class.
    */
    Daughter d;
    d.printProtected();

    return 0;
}