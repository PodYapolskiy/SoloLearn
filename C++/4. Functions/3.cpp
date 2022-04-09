// Random Numbers
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    /*
            Random Numbers
        Being able to generate random numbers is helpful in a number of situations, including when creating games, statistical modeling programs, and similar end products.
        You can access a pseudo random number generator function that's called rand().
    */
    cout << rand() << endl;

    // The srand() function is used to generate truly random numbers
    srand(98); // Allows to specify a seed value

    for (int x = 1; x <= 10; x++)
    {
        cout << 1 + (rand() % 6) << " ";
    }
    cout << "\n\n";

    // Truly Random Numbers
    srand(time(0));
    for (int x = 1; x <= 10; x++)
    {
        cout << 1 + (rand() % 6) << " ";
    }
    return 0;
}