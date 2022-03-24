// Array of Unions
#include <stdio.h>

int main()
{
    union val
    {
        int int_num;
        float fl_num;
        char str[20];
    };
    union val nums[10];

    for (int k = 0; k < 10; k++)
        nums[k].int_num = k;

    for (int k = 0; k < 10; k++)
        printf("%d ", nums[k].int_num);
    putchar('\n');

    // Arrays of unions allow storing values of different types.
    union type
    {
        int i_val;
        float f_val;
        char ch_val;
    };
    union type arr[3];
    arr[0].i_val = 42;
    arr[1].f_val = 3.14;
    arr[2].ch_val = 'x';
    printf("1st element is %d, 2nd is %f, and the 3rd is %c", arr[0].i_val, arr[1].f_val, arr[2].ch_val);

    return 0;
}