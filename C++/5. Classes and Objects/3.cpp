// Encapsulation
#include <iostream>
#include <string>
using namespace std;

class MyClass
{
    private:
        string surname;

    public:
        string name;
        void setSurname(string x) { surname = x; }
        string getSurname() { return surname; }
};

int main()
{
    /*
            Encapsulation
        The word encapsulation is the idea of "surrounding" an entity, not just to keep what's inside together, but also to protect it.

        Simply combining attributes and behavior together within a class
        Restricting access to the inner workings of that class.

        In summary the benefits of encapsulation are:
        - Control the way data is accessed or modified.
        - Code is more flexible and easy to change with new requirements.
        - Change one part of code without affecting other part of code.
    */

    /*
            Access Specifiers
        Access specifiers are used to set access levels to particular members of the class.
        If no access specifier is defined, all members of a class are set to private by default.

            public
        Accessible from outside the class, and anywhere within the scope of the class object.

            protected
        ...

            private
        A private member cannot be accessed, or even viewed, from outside the class.
        it can be accessed only from within the class.


        Access modifiers only need to be declared once.
        Multiple members can follow a single access modifier.
    */
    MyClass myObj;
    myObj.name = "Ivan";
    cout << myObj.name << endl; // The name attribute is public; it can be accessed and modified from outside the code
    myObj.setSurname("Ivanov");
    cout << myObj.getSurname() << endl; // The name attribute

    return 0;
}