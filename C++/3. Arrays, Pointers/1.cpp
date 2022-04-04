// Arrays
#include <iostream>
using namespace std;

int main()
{
    /*
            Array
        An array is used to store a collection of data, but it may be useful to think of an array as a collection of variables that are all of the same type.
    */
    int a[5];                        // Declaration array with 5 integers
    int b[5] = {11, 45, 62, 70, 88}; // Declaration and initialization array with 5 integers

    int c[] = {11, 45, 62, 70, 88};
    c[2] = 42; // Change third element of the array
    cout << "c[2] = " << c[2] << endl;

    // Using loops to edit array
    int numSquares[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        numSquares[i] *= numSquares[i];
        cout << numSquares[i];
        if (i != 4)
            cout << ", ";
    }
    cout << "\n\n";

    /*
            Multi-Dimensional Arrays
        type name[size1][size2]...[sizeN];
    */
    int y[3][4]; // Declaration of arrays with 3 4-dimmensional array
    int x[2][3] = {
        {2, 3, 4}, // 1st row
        {8, 9, 10} // 2nd row
    };
    // Iteration through multi-dimentional array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << x[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}