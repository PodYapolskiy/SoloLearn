// Static Variables
#include <stdio.h>

void say_hello()
{
    /*
            Static Variables
        Have a local scope but are not destroyed when a function is exited.
        Static variable retains its value for the life of the program and can be accessed every time the function is re-entered.
        Initialized when declared.
    */
    static int num_calls = 1;
    printf("%d\n", num_calls);
    num_calls++;
}

int main()
{

    for (int i = 0; i < 5; i++)
    {
        say_hello();
    }
}