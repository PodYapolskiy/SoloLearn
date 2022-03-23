// String Input
#include <stdio.h>

int main()
{
    char first_name[25];
    int age;
    printf("Enter your first name and age: ");
    scanf("%s %d", first_name, &age);
    printf("%s, you're only %d?!\n", first_name, age);

    char second_name[25];
    char third_name[25];
    printf("Enter: ");
    scanf("%s %s", second_name, third_name);
    printf("Hi, %s %s %s!\n", first_name, second_name, third_name);

    fputs(first_name, stdout);
    puts(first_name); // Adds a newline to output

    return 0;
}