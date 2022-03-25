// Memomary Management
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("%d\n", sizeof(x)); // 4

    int arr[10];
    printf("%d\n", sizeof(arr)); // 40

    char str[] = "Hello";
    printf("%d\n", sizeof(str)); // 6 ('\0' char)

    /*
        Dynamic memory allocation is the process of allocating and freeing memory as needed.
        Now you can prompt at runtime for the number of array elements and then create an array with that many elements.
        Dynamic memory is managed with pointers that point to newly allocated blocks of memory in an area called the heap.

        In addition to automatic memory management using the stack and dynamic memory allocation using the heap, there is statically managed data in main memory for variables that persist for the lifetime of the program.

        Stack --> Memory Allocated during Compile Time
        Heap --> Memory Allocated During run Time.
        Only difference is, If we know exact size of the variable, then it can be a stack, else it should be a heap.

        char name[2]={'a','b'}; --> stack, since we know the size
        char name[]; --> Heap Allocation, since we don't know the size // malloc here
    */

    /*

        malloc(bytes) - returns a pointer to a contiguous block of memory that is of size bytes.
        calloc(num_items, item_size) - returns a pointer to a contiguous block of memory that has num_items items, each of size item_size bytes.
            Typically used for arrays, structures, and other derived data types.
            The allocated memory is initialized to 0.
        realloc(ptr, bytes) - resizes the memory pointed to by ptr to size bytes. The newly allocated memory is not initialized.
        free(ptr) - releases the block of memory pointed to by ptr.

        When you no longer need a block of allocated memory, use the function free() to make the block available to be allocated again.
    */
    return 0;
}