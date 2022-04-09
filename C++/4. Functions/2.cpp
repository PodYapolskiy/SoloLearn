// Multiple Parametres
#include <iostream>
using namespace std;

// You can add as many parameters to a single function as you want
int addNumbers(int x, int y, int z, int a)
{
    int result = x + y + z + a;
    return result;
}

int main()
{
    cout << addNumbers(1, 7, 8, 3);

    return 0;
}