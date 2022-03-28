// Controlling the File Pointer
#include <stdio.h>

int main()
{
    /*
            Controlling the File Pointer
        ftell(fp) Returns a long int value corresponding to the fp file pointer position in number of bytes from the start of the file.

        fseek(fp, num_bytes, from_pos) Moves the fp file pointer position by num_bytes bytes relative to position from_pos.

        from_pos:
        SEEK_SET start of file
        SEEK_CUR current position
        SEEK_END end of file
    */
    typedef struct
    {
        int id;
        char name[20];
    } item;

    FILE *fptr;
    item first, second, secondf;

    // Create records
    first.id = 10276;
    strcpy(first.name, "Widget");
    second.id = 11786;
    strcpy(second.name, "Gadget");

    // Write records to a file
    fptr = fopen("5.dat", "wb");
    fwrite(&first, 1, sizeof(first), fptr);
    fwrite(&second, 1, sizeof(second), fptr);
    fclose(fptr);

    // File contains 2 records of type item
    fptr = fopen("5.dat", "rb");

    // Seek second record
    fseek(fptr, 1 * sizeof(item), SEEK_SET);
    fread(&secondf, 1, sizeof(item), fptr);
    printf("%d  %s\n", secondf.id, secondf.name);
    fclose(fptr);

    return 0;
}