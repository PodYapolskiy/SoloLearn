// Functions & Arrays
#include <stdio.h>

int add_up(int *a, int num_elements)
{
    int total = 0;
    int k;

    for (k = 0; k < num_elements; k++)
    {
        total += a[k];
    }

    return total;
}

int *get_evens() // Not an array, a pointer is declared to store value returned by the function.
{
    // When a local variable is being passed out of a function, you need to declare it as static.
    static int nums[5];
    int k;
    int even = 0;

    for (k = 0; k < 5; k++)
    {
        nums[k] = even += 2;
    }

    return nums;
}

int main()
{
    // Functions with Array Parameters
    int orders[5] = {100, 220, 37, 16, 98};
    printf("Total orders is %d\n", add_up(orders, 5));

    // Functions that Return an Array
    int *a;
    int k;

    a = get_evens(); /* get first 5 even numbers */
    for (k = 0; k < 5; k++)
        printf("%d\n", a[k]); // a[k] is equal to *(a + k)

    return 0;
}