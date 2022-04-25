// Exceptions
#include <iostream>
using namespace std;

int main()
{
    /*
            Exceptions
        C++ exception handling is built upon three keywords: try, catch, and throw.
        The try block throws the exception, and the catch block then handles it.
        Multiple catch statements may be listed to handle various exceptions in case multiple exceptions are thrown by the try block.

            throw
        throw is used to throw an exception when a problem shows up.
        The operand determines a type for the exception
        The type of the expression's result will determine the type of the exception thrown.

            try
        try block identifies a block of code that will activate specific exceptions.

            catch
        The catch keyword represents a block of code that executes when a particular exception is thrown.
    */
    try
    {
        int motherAge = 29;
        int sonAge = 36;
        if (sonAge > motherAge)
        {
            throw 99;
        }
    }
    catch (int x) // Specifying throwing type
    {
        cout << "Wrong age values - Error " << x;
    }

    return 0;
}
