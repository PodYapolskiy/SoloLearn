// Exceptions On Practise
#include <iostream>
using namespace std;

int main()
{
    try
    {
        int x;
        cout << "Enter the first number: ";
        cin >> x;

        int y;
        cout << "Enter the second number: ";
        cin >> y;

        if (y == 0)
            throw -1;

        cout << x / y << endl;
    }
    catch (...) // To accomplish handling any type of exception thrown, add an ellipsis (...) between the parentheses of catch
    {
        cout << "Division by zero!" << endl;
    }

    return 0;
}