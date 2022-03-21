// Pointers
#include <stdio.h>

void test(int k)
{
    printf("The address of k is %x\n", &k);
}

void swap(int *num1, int *num2)
{
    int temp;

    temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int main()
{
    // Adresses
    int adr = 0;

    // Adress of 'i' and copy of 'i', given as argument to test function
    printf("The address of i is %x\n", &adr);
    test(adr);

    // Adress of 'i' and given actual 'i' adress as argument to test function
    printf("The address of i is %x\n", &adr);
    test(adr);
    printf("\n");

    /*
            Pointer
        A pointer is a variable that contains the address of another variable.

        pointer_type *identifier

        The actual pointer data type is a hexadecimal number, but when declaring a pointer, you must indicate what type of data it will be pointing to.


        Pointers should be initialized to NULL until they are assigned a valid location.
        Pointers can be assigned the address of a variable using the ampersand & sign.
        To see what a pointer is pointing to, use the * again, as in *p.
        '*' is called the indirection or dereference operator. The process is called dereferencing.
    */
    int j = 63;
    int *p = NULL;
    p = &j;

    printf("The address of j is %x\n", &j);
    printf("p contains address %x\n", p);
    printf("The value of j is %d\n", j);
    printf("p is pointing to the value %d\n", *p);
    printf("\n");

    // Pointer to a pointer
    int x = 12;
    int *pt = NULL;
    int **ptr = NULL;
    pt = &x;
    ptr = &pt; // points to pt pointer which points to x value

    // Pointers in Expressions
    int z = 5;
    int y;
    int *pointer = NULL;
    pointer = &z;

    y = *pointer + 2; /* y is assigned 7 */
    y += *pointer;    /* y is assigned 12 */
    *pointer = y;     /* z is assigned 12 */
    (*pointer)++;     /* z is incremented to 13 */
    printf("pointer is pointing to the value %d\n\n", *pointer);

    /*
            Pointers and Arrays
        Use address arithmetic to traverse the array:
        1. '+' is used to move forward to a memory location
        2. '-' is used to move backward to a memory location

        An important concept with arrays is that an array name acts as a pointer to the first element of the array.
        Therefore, the statement ptr = a can be thought of as ptr = &a[0].
        printf("%d ", *a); - first element of the array
    */
    int a[5] = {22, 33, 44, 55, 66};
    int *point = NULL;
    int i;

    point = a;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", *(point + i));
    }
    printf("\n");

    /*
            Changing pointer's value by arithmetic operations
        When a pointer is incremented, the memory address increases by the number of bytes being pointed to.
        In the program above, the pointer increases by 4 when the increment operator is used (ptr++) because the pointer is pointing to an int. (int occupied 4 bytes)
    */
    point++;
    printf("%d %x\n", *point, point);
    point += 2;
    printf("%d %x\n", *point, point);

    // Pointers and Functions
    int s1 = 25;
    int s2 = 100;

    printf("x is %d, y is %d\n", s1, s2);
    swap(&s1, &s2);
    printf("x is %d, y is %d", s1, s2);

    return 0;
}