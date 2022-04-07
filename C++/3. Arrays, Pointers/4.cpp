// Sizeof Operator
#include <iostream>
using namespace std;

int main()
{
    /*
            Sizeof operator
        sizeof (data type)

        |----------------------------------------|
        | boolean        | bool        | 1 byte  |
        |----------------------------------------|
        | character      | char        | 1 byte  |
        |----------------------------------------|
        | integer        | short       | 2 bytes |
        |                | int         | 2 bytes |
        |                | long        | 4 bytes |
        |                | long long   | 8 bytes |
        |----------------------------------------|
        | floating point | float       | 4 bytes |
        |                | double      | 8 bytes |
        |                | long double | 8 bytes |
        |----------------------------------------|
    */
    cout << "sizeof(char): " << sizeof(char) << endl;
    cout << "sizeof(int): " << sizeof(int) << endl;
    cout << "sizeof(float): " << sizeof(float) << endl;
    cout << "sizeof(double): " << sizeof(double) << "\n\n";

    double myArr[10];
    cout << "sizeof(myArr) = " << sizeof(myArr); // 8 * 10 = 80

    return 0;
}