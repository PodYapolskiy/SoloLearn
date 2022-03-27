// Binary File I/O
#include <stdio.h>

int main()
{
    /*
        To write entire blocks of memory to a file, there are some fopen() modes and functions:

        rb open for reading (file must exist)
        wb open for writing (file need not exist)
        ab open for append (file need not exist)
        rb+ open for reading and writing from beginning
        wb+ open for reading and writing, overwriting file
        ab+ open for reading and writing, appending to file


        fwrite(ptr, item_size, num_items, fp) Writes num_items items of item_size size from pointer ptr to the file pointed to by file pointer fp.

        fread(ptr, item_size, num_items, fp) Reads num_items items of item_size size from the file pointed to by file pointer fp into memory pointed to by ptr.

        fclose(fp) Closes file opened with file fp, returning 0 if close was successful. EOF is returned if there is an error in closing.

        feof(fp) Returns 0 when the end of the file stream has been reached.
    */
    FILE *fptr;
    int arr[10];
    int x[10];
    int k;

    // Generate array of numbers
    for (k = 0; k < 10; k++)
        arr[k] = k;

    // Write array to file
    fptr = fopen("4.bin", "wb");
    fwrite(arr, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), fptr);
    fclose(fptr);

    // Read array from file
    fptr = fopen("4.bin", "rb");
    fread(x, sizeof(arr[0]), sizeof(arr) / sizeof(arr[0]), fptr);
    fclose(fptr);

    // Print array
    for (k = 0; k < 10; k++)
        printf("%d ", x[k]);

    return 0;
}