// Reading from a file
#include <stdio.h>

int main()
{
    /*
            Reading from a file
        A file can be read one character at a time or an entire string can be read into a character buffer, which is typically a char array used for temporary storage.


        fgetc(fp) Returns the next character from the file pointed to by fp.
        If the end of the file has been reached, then EOF is returned.


        fgets(buff, n, fp) Reads n-1 characters from the file pointed to by fp and stores the string in buff.
        A NULL character '\0' is appended as the last character in buff.
        If fgets encounters a newline character or the end of file before n-1 characters is reached, then only the characters up to that point are stored in buff.


        fscanf(fp, conversion_specifiers, vars) Reads characters from the file pointed to by fp and assigns input to a list of variable pointers vars using conversion_specifiers.
        As with scanf, fscanf stops reading a string when a space or newline is encountered.
    */
    FILE *fptr;
    int c, stock;
    char buffer[200], item[10];
    float price;

    fptr = fopen("2.txt", "r");
    if (fptr == NULL)
    {
        printf("Error opening file.");
        return -1;
    }

    fgets(buffer, 20, fptr); // gets() function reads up until the newline
    printf("%s\n", buffer);

    fscanf(fptr, "%d%s%f", &stock, item, &price); // fscanf() reads data according to conversion specifiers
    printf("%d  %s  %4.2f\n", stock, item, price);

    // The while loop reads one character at a time until the end of file
    while ((c = getc(fptr)) != EOF)
        printf("%c", c);

    fclose(fptr);

    return 0;
}