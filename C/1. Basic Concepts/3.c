// Input & Output
#include <stdio.h>

int main()
{
    printf("Enter i: ");
    char i = getchar();
    printf("You entered: %c\n", i);

    printf("Enter d: ");
    int d;
    scanf("%d", &d); // & - is the address operator
    printf("You entered: %d\n", d);

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum: %d\n", a + b);

    putchar('\n');
    putchar(i); // Output char
    putchar('\n');

    int x;
    float num;
    char text[20];
    scanf("%d %f %s", &x, &num, text); // string name acts as a pointer so we should use '&' with it
    printf("%d %f %s", x, num, text);

    // Format specifier
    // %[*][max_field]conversion character
    /*
        The optional * will skip the input field.
        The optional max_width gives the maximum number of characters to assign to an input field.
        The conversion character converts the argument, if necessary, to the indicated type:
        d decimal
        c character
        s string
        f float
        x hexadecimal
    */

    int y, z;
    char txt[20];

    scanf("%2d %d %*f %5s", &y, &z, txt); // input: 1234  5.7  elephant
    printf("%d  %d  %s", y, z, txt);      // output: 12  34  eleph

    /*
        PRINTF
        Escape sequences "\":
        \n new line
        \t horizontal tab
        \\ backslash
        \b backspace
        \' single quote
        \" double quote

        Format specifiers "%":
        %[-][width].[precision]conversion character

        The optional - specifies left alignment of the data in the string.
        The optional width gives the minimum number of characters for the data.
        The period . separates the width from the precision.
        The optional precision gives the number of decimal places for numeric data. If s is used as the conversion character, then precision determines the number of characters to print.
    */
    char world[5] = "world";
    printf("\n\t\"Hello %s!\"", world);

    return 0;
}