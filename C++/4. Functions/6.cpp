// Recursion
#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
    // Keep in mind that a base case is necessary for real recursion.
    // Without it, the recursion will keep running forever.
    cout << factorial(5) << endl;
}

int factorial(int n)
{
    if (n == 1) // The base case (exit condition)
        return 1;
    return n * factorial(n - 1);
}