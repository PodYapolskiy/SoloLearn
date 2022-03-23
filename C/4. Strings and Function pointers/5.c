// Functions Using Void Pointers
#include <stdio.h>
#include <stdlib.h>

void *square(const void *num)
{
    int result;
    //      '(*(int *)num)' is a variable value
    result = (*(int *)num) * (*(int *)num);
    return result; // (void *)
}

int compare(const void *elem1, const void *elem2)
{
    if ((*(int *)elem1) == (*(int *)elem2))
        return 0;
    else if ((*(int *)elem1) < (*(int *)elem2))
        return -1;
    return 1;
}

int main()
{
    /*
            Functions Using void Pointers
        Void pointers are often used for function declarations.
            void * square (const void *);
        Using a void * return type allows for any return type.
        Similarly, parameters that are void * accept any argument type.

        If you want to use the data passed in by the parameter without changing it, you declare it const.

        (Hard to understand)
        You can leave out the parameter name to further insulate the declaration from its implementation.
        Declaring a function this way allows the definition to be customized as needed without having to change the declaration.
    */
    int x = 6;
    int sq_int = (int)square(&x); // why (int) before - https://stackoverflow.com/questions/18117376/warning-return-makes-pointer-from-integer-without-a-cast-but-returns-integer-as
    printf("%d squared is %d\n", x, sq_int);

    // If the implementation were to be changed to allow square() to multiply floats, then only the definition need be changed without having to make changes to the declaration

    // Doesn't work as I thought
    float y = 8.1;
    // float sq_float = (float)square(&y); - call an error

    /*
            Function Pointers as Arguments
        void qsort(void *base, size_t num, size_t width, int (*compare)(const void *, const void *))

        void *base - a void pointer to the array
        size_t num - the number of elements in the array
        size_t width - the size of an element
        int (*compare (const void *, const void *) - a function pointer which has two arguments and returns 0 when the arguments have the same value, <0 when arg1 comes before arg2, and >0 when arg1 comes after arg2.
    */
    int arr[5] = {52, 23, 56, 19, 4};
    int num, width, i;

    num = sizeof(arr) / sizeof(arr[0]);
    width = sizeof(arr[0]);
    qsort((void *)arr, num, width, compare);
    for (i = 0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}