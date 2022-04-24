// Template Specialization
#include <iostream>
using namespace std;

template <class T>
class MyClass
{
    public:
        MyClass(T x)
        {
            cout << x << " is not a char" << endl;
        }
};

// To specify different behavior for the data type char, we would create a template specialization
// We precede the class name with "template<>"
// This is because all types are known and no template arguments are required for this specialization
// But still, it is the specialization of a class template, and thus it requires to be noted as such
template <>
class MyClass<char> // <char> specialization parameter identifies the type for which the template class is being specialized
{
    public:
        MyClass(char x)
        {
            cout << x << " is a char!" << endl;
        }
};

int main()
{
    /*
            Template Specialization
        In case of regular class templates, the way the class handles different data types is the same; the same code runs for all data types.
        Template specialization allows for the definition of a different implementation of a template when a specific type is passed as a template argument.

        Keep in mind that there is no member "inheritance" from the generic template to the specialization, so all members of the template class specializations must be defined on their own.
    */
    MyClass<int> ob1(42);
    MyClass<double> ob2(5.47);
    MyClass<char> ob3('s'); // Template specialization is invoked for the char data type

    return 0;
}