// Overloading
#include <iostream>
using namespace std;

void printNumber(int x) { cout << "Prints an integer: " << x << endl; }

void printNumber(float x) { cout << "Prints a float: " << x << endl; }

int main()
{
    /*
            Overloading
        Function overloading allows to create multiple functions with the same name, so long as they have different parameters.

        You can not overload function declarations that differ only by return type.
        The following declaration results in an error:

        int printNumber(int x)
        float printNumber(int x)
    */
    int a = 16;
    float b = 54.541;
    printNumber(a);
    printNumber(b);

    return 0;
}