// Exception Handling
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
            Exception Handling
        C does not explicitly support exception handling.
        An exception is any situation that causes your program to stop normal execution.
        Exception handling, also called error handling, is an approach to processing runtime errors.

        The exit command immediately stops the execution of a program and sends an exit code back to the calling process.
        Using exit to avoid a program crash is a good practice because it closes any open file connections and processes.
    */
    int x = 10,
        y = 0;

    if (y != 0)
        printf("x / y = %d", x / y);
    else
    {
        printf("Divisor is 0. Program exiting.\n");
        exit(EXIT_FAILURE);
    }

    return 0;
}