// Switch Statement
#include <iostream>
using namespace std;

int main()
{
    /*
        switch(expression) {
            case value1:
                statement;
                break;
            case value2:
                statement;
                break;
            default:
                statement;
        }
    */
    int age = 42;
    switch (age)
    {
    case 16:
        cout << "Too young" << endl;
    case 42:
        cout << "Adult" << endl;
    case 70:
        cout << "Senior" << endl;
        break; // Break is necessary if we want to stop after chosen case
    default:
        cout << "This is the default case" << endl;
    }

    return 0;
}