// The feof and ferror Functions
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
            The feof and ferror Functions
        feof() and ferror() functions can be used for determining file I/O errors

        feof(fp) - returns a nonzero value if the end of stream has been reached, 0 otherwise. feof also sets EOF.

        ferror(fp) - returns a nonzero value if there is an error, 0 for no error.
    */
    FILE *fptr;
    int c;

    errno = 0;
    fptr = fopen("11.txt", "r");
    if (fptr == NULL)
    {
        fprintf(stderr, "Error opening file. %s\n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    while ((c = getc(fptr)) != EOF) // Read the rest of the file
        printf("%c", c);

    if (ferror(fptr))
    {
        printf("I/O error reading file.");
        exit(EXIT_FAILURE);
    }
    else if (feof(fptr))
        printf("End of file reached.");

    fclose(fptr);

    return 0;
}