// Calloc Function
#include <stdio.h>
#include <string.h>

int main()
{
    /*
        Calloc()
        The calloc() function allocates memory based on the size of a specific item, such as a structure.

        Dynamically allocated structures are the basis of linked lists and binary trees as well as other data structures.
    */
    typedef struct
    {
        int num;
        char *info;

    } record;

    record *recs;
    int num_recs = 2;
    int k;
    char str[] = "This is information";

    recs = calloc(num_recs, sizeof(record)); // Allocates memory for a structure
    if (recs != NULL)
    {
        for (k = 0; k < num_recs; k++){
            (recs+k)->num = k;
            (recs+k)->info = malloc(strlen(str)); // Allocates memory for the string within the structure
            strcpy((recs+k)->info, str);
        }
    }

    return 0;
}