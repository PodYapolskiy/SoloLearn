// Operator Overloading
#include <iostream>
using namespace std;

class MyClass
{
    public:
        int var;
        MyClass() {}
        MyClass(int a) : var(a) {}

        // Returns an object of our class and takes an object of our class as its parameter
        // Assigned the sum of the member variables of the current object (this) and the parameter object (obj) to the res object's var member variable
        MyClass operator+(MyClass &obj)
        {
            MyClass res;
            res.var = this->var + obj.var;
            return res;
        }
};

int main()
{
    /*
            Operator Overloading
        Most of the C++ built-in operators can be redefined or overloaded.
        Thus, operators can be used with user-defined types as well (for example, allowing you to add two objects together).

        Operators that can't be overloaded include :: | .* | . | ?:

        Overloaded operators are functions, defined by the keyword operator followed by the symbol for the operator being defined.
        An overloaded operator is similar to other functions in that it has a return type and a parameter list.

        With overloaded operators, you can use any custom logic needed.
        However, it's not possible to alter the operators' precedence, grouping, or number of operands.
    */
    MyClass obj1(5), obj2(10);
    MyClass res = obj1 + obj2;
    cout << res.var;

    return 0;
}