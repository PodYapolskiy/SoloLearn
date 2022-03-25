// Realloc Function
#include <stdio.h>

int main()
{
    /*
            Realloc()
        The realloc() function expands a current block to include additional memory.
        It leaves the original content in memory and expands the block to allow for more storage.
    */
    int *ptr;
    ptr = malloc(10 * sizeof(*ptr)); // A block of 10 ints

    if (ptr != NULL)
    {
        *(ptr + 2) = 50; // Assign 50 to third int
    }

    ptr = realloc(ptr, 100 * sizeof(*ptr)); // 100 ints
    *(ptr + 30) = 75;
    printf("%d %d", *(ptr + 2), *(ptr + 30));

    return 0;
}