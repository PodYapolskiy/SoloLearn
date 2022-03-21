// Strings
#include <stdio.h>
#include <string.h>

int main()
{
    /*
            Strings
        Strings ends with NULL character '\0' so inisialized length should be bigger on 1.

        char str_name[str_len] = "string";

        When you provide a string literal to initialize the string, the compiler automatically adds a NULL character '\0' to the char array.
    */
    char str1[6] = "hello";
    char str2[] = "world";
    printf("sizeof(str2) = %d\n", sizeof(str2)); // 6

    char *str = "stuff";
    for (int i = 0; i < 5; i++)
        printf("%c", str[i]);
    printf("\n%s\n", str);

    /*
            <string.h> functions
       strlen(str) - get length of a string
       strcat(str1, str2) - merge two strings (returns a pointer to str1)
       strcpy(str1, str2) - copy one string to another
       strlwr(str) - convert string to lower case
       strupr(str) - convert string to upper case
       strrev(str) - reverse string
       strcmp(str1, str2) - compare two strings. Returns 0 when str1 is equal to str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2.
   */
    printf("%d\n", strlen(str));

    char new_string[13]; // hello world!\0
    strcpy(new_string, str1);

    char s[] = " world!";
    strcat(new_string, s);

    printf("new_string=%s\n", new_string);
    printf("strlen(new_string)=%d\n", strlen(new_string));
    printf("sizeof(new_string)=%d\n\n", sizeof(new_string));

    char hello_world_string[] = "Hello World!";
    printf("hello_world_string=%s\n", strupr(hello_world_string));
    printf("hello_world_string=%s\n\n", strlwr(hello_world_string));

    char reversed_string[] = "!dlroW olleH";
    printf("reversed_string=%s\n", strrev(reversed_string));

    char guess_string[] = "Hi!";
    char gs1[] = "H";
    char gs2[] = "HAWdawdasdwadaw";
    printf("%d\n", strcmp(guess_string, gs1)); // Returns 1 if not equals
    printf("%d\n", strcmp(guess_string, gs2)); // Returns -1 or 1 if not equals
    printf("%d", strcmp(guess_string, "Hi!"));

    return 0;
}
