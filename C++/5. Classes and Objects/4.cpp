// Constructors
#include <iostream>
using namespace std;

class myClass
{
    public:
        myClass(string nm)
        {
            cout << "Hey" << nm << endl;
            setName(nm);
        }
        void setName(string x)
        {
            name = x;
        }
        string getName()
        {
            return name;
        }

    private:
        string name;
};

int main()
{
    /*
            Constructors
        Class constructors are special member functions of a class.
        The constructor's name is identical to that of the class. It has no return type, not even void.
        When class objects is created, the constructor is called.

        Constructors can be very useful for setting initial values for certain member variables.
        It's possible to have multiple constructors that take different numbers of parameters.
    */
    myClass obj1("Steve");
    myClass obj2("Amy");
    cout << obj1.getName() << endl;

    return 0;
}