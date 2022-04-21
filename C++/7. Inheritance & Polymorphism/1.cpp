// Inheritance
#include <iostream>
using namespace std;

class Mother
{
    public:
        Mother(){};
        
        void sayHi()
        {
            cout << "Hi" << endl;
        }
};

// Access specifier public means, that all public members of the base class are public in the derived class
// All public members of the Mother class become public members of the Daughter class
class Daughter : public Mother
{
    public:
        Daughter(){};
};

int main()
{
    /*
            Inheritance
        Inheritance is one of the most important concepts of object-oriented programming.
        Inheritance allows us to define a class based on another class.
        The class whose properties are inherited by another class is called the Base class.
        The class which inherits the properties is called the Derived class.
        The derived class inherits all feature from the base class, and can have its own additional features.

        The idea of inheritance implements the is a relationship.

        A derived class inherits all base class methods with the following exceptions:
        - Constructors, destructors
        - Overloaded operators
        - The friend functions

        A class can be derived from multiple classes by specifying the base classes in a comma-separated list. For example: class Daughter: public Mother, public Father
    */
    Daughter d;
    d.sayHi();

    return 0;
}