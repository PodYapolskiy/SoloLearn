// The perror and strerror Functions
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
            The perror and strerror Functions
        When a library function sets errno, a cryptic error number is assigned.

        Use perror() for a more descriptive message about the error.
        Use strerror() to obtain the message. (returns a pointer to the message text)

    */
    FILE *fptr;

    errno = 0;
    fptr = fopen("c:\\nonexistantfile.txt", "r");
    if (fptr == NULL)
    {
        perror("Error");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }
    fclose(fptr);

    return 0;
}