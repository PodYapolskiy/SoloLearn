// Loops
#include <iostream>
using namespace std;

int main()
{
    /*      The while loop

        while (condition) {
            statement(s);
        }
    */
    int num = 0;
    while (num < 3)
    {
        cout << num << " ";
        num++;
    }
    cout << "\n\n";

    /*
            The for loop

        for ( init; condition; increment ) {
                statement(s);
        }
    */
    for (int i = 10; i > 0; i--)
    {
        cout << i << " ";
    }

    int i = 5;
    for (; i > 0;) // init and increment statements may be left out
    {
        cout << i << " ";
        i--;
    }
    cout << "\n\n";

    /*
            The do...while loop

        do {
            statement(s);
        } while (condition);
    */
    int a = 7;
    do
    {
        cout << a << " ";
        a--;
    } while (a > 0);

    return 0;
}