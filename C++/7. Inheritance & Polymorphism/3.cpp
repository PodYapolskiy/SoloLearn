// Derived Class Constructor & Destructor
#include <iostream>
using namespace std;

class Mother
{
    public:
        Mother()
        {
            cout << "Mother ctor" << endl;
        }
        ~Mother()
        {
            cout << "Mother dtor" << endl;
        }
};

class Daughter : public Mother
{
    public:
        Daughter()
        {
            cout << "Daughter ctor" << endl;
        }
        ~Daughter()
        {
            cout << "Daughter dtor" << endl;
        }
};

int main()
{
    /*
                Derived Class Constructor & Destructor

            Constructors
        The base class constructor is called first.

            Destructors
        The derived class destructor is called first, and then the base class destructor gets called.
    */
    // The base class' constructor is called first, and the derived class' constructor is called next
    // When the object is destroyed, the derived class's destructor is called, and then the base class' destructor is called.
    Daughter m;

    return 0;
}