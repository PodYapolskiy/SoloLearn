// Function Templates
#include <iostream>
using namespace std;

template <class T>

// The function returns a value of the generic type T, taking two parameters, also of type T
T sum(T x, T y)
{
    return x + y;
}

int main()
{
    /*
            Function Templates
        Function templates give us the ability to be able to write one version of function() to work with parameters of any type.
        With function templates, the basic idea is to avoid the necessity of specifying an exact type for each variable.
        Instead, C++ provides us with the capability of defining functions using placeholder types, called template type parameters.

        template <class T> - name our template type T, which is a generic data type

        The compiler automatically calls the function for the corresponding type.

        When creating a template type parameter, the keyword typename may be used as an alternative to the keyword class: template <typename T>".
        In this context, the keywords are identical, but throughout this course, we'll use the keyword class.

        Template functions can save a lot of time, because they are written only once, and work with different types.
        Template functions reduce code maintenance, because duplicate code is reduced significantly.
    */
    int x = 5, y = 7;
    cout << sum(x, y) << endl;

    double a = 12.54, b = 7.32;
    cout << sum(a, b) << endl;

    return 0;
}