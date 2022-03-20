// Arrays
#include <stdio.h>

int main()
{
    /*
            Arrays
        type identidier[size] (= {1, 2, 3, ...}) - initialization is optional

        Array can not change size after being declared.
    */
    int x[5] = {20, 45, 16, 18, 22};
    x[1] = 1; // Value can be changed

    // Loop's usage with array
    int summary = 0;
    for (int i = 0; i < 5; i++)
    {
        summary += x[i];
    }
    printf("sum = %d\n", summary);

    // 2-dimensional array
    int a[2][3] = {
        {3, 2, 6},
        {4, 5, 20},
    };

    int k, j;
    /* display array contents */
    for (k = 0; k < 2; k++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("\t%d", a[k][j]);
        }
        printf("\n");
    }

    return 0;
}