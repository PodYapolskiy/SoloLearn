// Dynamic Strings & Arrays
#include <stdio.h>
#include <string.h>

int main()
{
    /*
            Allocating memory for strings
        When allocating memory for a string pointer, you may want to use string length rather than the sizeof operator for calculating bytes.
        This approach is better memory management because you aren’t allocating more space than is needed to a pointer.
        When using strlen to determine the number of bytes needed for a string, be sure to include one extra byte for the NULL character '\0'.
    */
    char str20[20];
    char *str = NULL;

    strcpy(str20, "12345");
    str = malloc(strlen(str20) + 1); // '\0'
    strcpy(str, str20);
    printf("%s\n\n", str);

    /*
            Dynamic arrays
        Because elements are not allocated all at once, dynamic arrays typically use a structure to keep track of current array size, current capacity, and a pointer to the elements.
    */
    typedef struct
    {
        int *elements;
        int size;
        int cap;
    } dyn_array;

    dyn_array arr;
    int i;

    // Initialize array
    arr.size = 0;
    arr.elements = calloc(1, sizeof(*arr.elements));
    arr.cap = 1; // Room for 1 element

    // Expand by 5 more elements
    arr.elements = realloc(arr.elements, (5 + arr.cap) * sizeof(*arr.elements));
    if (arr.elements != NULL)
        arr.cap += 5; // Increase capacity

    // Add an element and increase size
    if (arr.size < arr.cap)
    {
        arr.elements[arr.size] = 50; // Add element to array
        arr.size++;
    }
    else
        printf("Need to expand array.");

    // Display array elements
    for (i = 0; i < arr.cap; i++)
        printf("Element %d: %d\n", i, arr.elements[i]);

    return 0;
}