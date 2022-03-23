// Arithmetic Operators
#include <iostream>
using namespace std;

int main()
{
    int x = 15, y = 4;

    cout << "x + y = " << x + y << endl;
    cout << "x - y = " << x - y << endl;
    cout << "x * y = " << x * y << endl;
    cout << "x / y = " << x / y << endl; // If one or both of the operands are floating point values, the division operator performs floating point division.
    cout << "x % y = " << x % y << endl << endl;

    x += 4; // x = x + 4
    x -= 5; // x = x - 5

    // Increment, Decrement
    x++; // x = x + 1
    cout << "x = " << x << endl << endl; // 15

    /*
        ++x; - PREFIX increments the value, and then proceeds with the expression.
        x++; - POSTFIX evaluates the expression and then performs the incrementing.
    */
    x = 5;
    y = ++x; 
    cout << "x = " << x << ", y = " << y << endl; // x is 6, y is 6

    x = 5;
    y = x++;
    cout << "x = " << x << ", y = " << y << endl; // x is 6, y is 5

    return 0;
}