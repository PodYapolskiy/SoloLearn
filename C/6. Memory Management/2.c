// Malloc Function
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
            Malloc()
        Pointer arithmetic is used to traverse the array. *(ptr + i)
        Using ++ or += changes the address stored by the pointer.

        If the allocation is unsuccessful, NULL is returned. Because of this, you should include code to check for a NULL pointer.
        A simple two-dimensional array requires (rows*columns)*sizeof(datatype) bytes of memory.
    */
    int *ptr;
    ptr = (int *)malloc(3 * sizeof(*ptr)); // Allocate contiguous block of 3 int
    
    // Output content of uninitialized memory and its address
    for (int i = 0; i < 3; i++)
    {
        printf("address ptr[%d]: %p\t", i, ptr + i);
        printf("content ptr[%d]: %d\n", i, *(ptr + i));
    }
    printf("\n");

    if (ptr != NULL)
    {
        for (int i = 0; i < 3; i++)
            *(ptr + i) = i + 1;
    }

    // Output content of itialized memory and its address
    for (int i = 0; i < 3; i++)
    {
        printf("address ptr[%d]: %p\t", i, ptr + i);
        printf("content ptr[%d]: %d\n", i, *(ptr + i));
    }
    printf("\n");

    /*
            Free()
        Function is a memory management function that is called to release memory.
        By freeing memory, you make more available for use later in your program.
    */
    free(ptr); // Free allocated memory

    // Output content of freed memory and its address
    for (int i = 0; i < 3; i++)
    {
        printf("address ptr[%d]: %p\t", i, ptr + i);
        printf("content ptr[%d]: %d\n", i, *(ptr + i));
    }

    return 0;
}