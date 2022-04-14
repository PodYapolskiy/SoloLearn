// Objects and Classes
#include <iostream>
using namespace std;

class BankAccount
{
    public:
        void sayHi()
        {
            cout << "Hi" << endl;
        }
};

int main()
{
    /*
            Object
        Objects are independent units, and each has its own identity.
        Objects also have characteristics that are used to describe them.
        These characteristics are also called attributes wich describe the current state of an object.
        Identity, Attributes, Behavior - three dimensions describe any object in object oriented programming.


            Class
        The class describes what the object will be, but is separate from the object itself.
        Each class has a name, and describes attributes and behavior.
        Method is basically a function that belongs to a class.


            Declaring a Class
        Define all attributes and behavior (or members) in the body of the class, within curly braces.
        You can also define an access specifier for members of the class.
        A member that has been defined using the public keyword can be accessed from outside the class, as long as it's anywhere within the scope of the class object.
        You can also designate a class' members as private or protected.

    */
    BankAccount admin;
    admin.sayHi(); // Dot separator (.) is used to access and call the method of the object.

    return 0;
}