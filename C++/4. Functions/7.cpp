// Arrays and Functions
#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int x = 0; x < size; x++)
    {
        cout << arr[x] << endl;
    }
}

int main()
{
    /*
            Arrays and Functions
        An array can also be passed to a function as an argument.
        Remember to specify the array's name without square brackets when passing it as an argument to a function.
    */
    int arr[] = {1, 2, 3, 4, 5};
    printArray(arr, 5);

    return 0;
}