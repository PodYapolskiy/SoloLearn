// Error Codes
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
    for (int x = 0; x < 135; x++)
        fprintf(stderr, "%d: %s\n", x, strerror(x));
}