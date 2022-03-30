// Using Errno
#include <stdio.h>
#include <stdlib.h>

// Two ways of getting the errno
#include <errno.h>
extern int errno;

int main()
{
    /*

        Some library functions, such as fopen(), set an error code when they do not execute as expected.
        The error code is set in a global variable named errno, which is defined in the errno.h header file.
        When using errno you should set it to 0 before calling a library function.

        To output the error code stored in errno, you use fprintf to print to the stderr file stream, the standard error output to the screen.
        Using stderr is a matter of convention and a good programming practice.

        You can output the errno through other means, but it will be easier to keep track of your exception handling if you only use stderr for error messages.

        To use errno, you need to declare it with the statement extern int errno; at the top of your program
                        or
        You can include the errno.h header file.
    */
    FILE *fptr;

    errno = 0;
    fptr = fopen("c:\\nonexistantfile.txt", "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Error opening file. Error code: %d\n", errno);
        exit(EXIT_FAILURE);
    }
    fclose(fptr);

    return 0;
}