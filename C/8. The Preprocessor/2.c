// Formatting Preprocessor Directives
// You can use the \continuation character to extend the definition over more than one line.
#include <stdio.h>
#define VERY_LONG_CONSTANT \
    23.678901

#define MAX 100
#define MIN 0
#define SQUARE(x) \
    x * x

int main()
{
    printf("%d\n", VERY_LONG_CONSTANT * SQUARE(2)); // 1958230209
    return 0;
}