// Writing to a File
#include <stdio.h>

int main()
{
    /*
            Writing to a File
        When writing to a file, newline characters '\n' must be explicitly added.

        fputc(char, fp) Writes character char to the file pointed to by fp.

        fputs(str, fp) Writes string str to the file pointed to by fp.

        fprintf(fp, str, vars) Prints string str to the file pointed to by fp. str can optionally include format specifiers and a list of variables vars.
    */
    FILE *fptr;
    char filename[50];
    char c;

    printf("Enter the filename of the file to create: ");
    gets(filename);
    fptr = fopen(filename, "w");

    // Write to file
    fprintf(fptr, "Inventory\n");
    fprintf(fptr, "%d %s %f\n", 100, "Widget", 0.29);
    fputs("End of List", fptr);

    fclose(fptr);

    // Read the file contents
    fptr = fopen(filename, "r");
    while ((c = getc(fptr)) != EOF)
        printf("%c", c);
    fclose(fptr);

    return 0;
}