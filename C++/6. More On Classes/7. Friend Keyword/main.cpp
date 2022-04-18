// Friend Keyword
#include <iostream>
using namespace std;

class MyClass
{
    public:
        MyClass()
        {
            regVar = 0;
        }

    private:
        int regVar;

        // It's not a member function of the class, is a friend of MyClass and can access its private members
        friend void someFunc(MyClass &obj); // When passing an object to the function, we need to pass it by reference
};

void someFunc(MyClass &obj) // Function changes the private member of the object and prints its value
{
    obj.regVar = 42;
    cout << obj.regVar;
}

int main()
{
    /*
            Friend Functions
        Declaring a non-member function as a friend of a class allows it to access the class' private members.
        This is accomplished by including a declaration of this external function within the class, and preceding it with the keyword friend.

        You cannot "make" a function a friend to a class without the class "giving away" its friendship to that function.
        Typical use cases of friend functions are operations that are conducted between two different classes accessing private members of both.

        You can declare a function friend across any number of classes.
        Similar to friend functions, you can define a friend class, which has access to the private members of another class.
    */
    MyClass obj;
    someFunc(obj);

    return 0;
}