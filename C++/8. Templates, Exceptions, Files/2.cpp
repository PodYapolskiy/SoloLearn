// Function Templates
#include <iostream>
using namespace std;

// template declares two different generic data types, T and U
template <class T, class U>

T smaller(T a, U b)
{
    return (a < b ? a : b);
}

int main()
{
    /*
            Function Templates
        Function templates also make it possible to work with multiple generic data types.
        T is short for Type, and is a widely used name for type parameters.

        Remember that when you declare a template parameter, you absolutely must use it in your function definition. Otherwise, the compiler will complain!
    */
    int x = 72, y = 15.34;
    cout << smaller(x, y) << endl;

    return 0;
}