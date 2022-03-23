// Conditional Statements
#include <iostream>
using namespace std;

int main()
{
    /*
        if (condition) {
            statements
        }
        else if {
            statements
        }
        else {
            statements
        }
    */
    int a = 55, b = 55;
    if (a > b)
        cout << "a is greater than b" << endl; // if it's only one statement, "{}" are not necessary
    else if (a < b)
        cout << "b is greater than a" << endl;
    else
        cout << "a is equal b" << endl;

    /*
            Logical Operators
        && - logical AND
        || - logical OR
        ! - logical NOT
    */
    int n = 42;
    if (n > 0 && n <= 100 || !(n > 25 && n < 75))
        cout << "Complex condition" << endl;

    return 0;
}