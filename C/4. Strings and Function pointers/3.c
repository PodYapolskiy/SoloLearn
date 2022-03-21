// String functions
#include <stdio.h>

int main()
{
    // sprintf
    char inf[100];
    char dept[] = "HR";
    int emp = 75;
    sprintf(inf, "The %s dept has %d employees.", dept, emp);
    printf("%s\n\n", inf);

    // sscanf
    char info[] = "Snoqualmie WA 13190";
    char city[50], state[50];
    int population;
    sscanf(info, "%s %s %d", city, state, &population);
    printf("%d people live in %s, %s.\n\n", population, city, state);

    /*
            Other <string.h> functions
        strncat(str1, str2, n) - concatenates first n characters of str2 to the end of str1 and returns a pointer to str1
        strncpy(str1, str2, n) - copies the first n characters of str2 to str1
        strncmd(tr1, str2, n) - returns 0 when the first n characters of str1 is equal to the first n characters of str2, less than 0 when str1 < str2, and greater than 0 when str1 > str2)
        strchr(str1, c) - returns a pointer to the first occurrence of char c in str1, or NULL if character not found
        strrchr(str1, c) - searches str1 in reverse and returns a pointer to the position of char c in str1, or NULL if character not found
        strstr(str1, str2) - returns a pointer to the first occurrence of str2 in str1, or NULL if str2 not found
    */

    /*
            Converting string to integer
        int atoi(str) - stands for ASCII to integer. Converts str to the equivalent int value. 0 is returned if the first character is not a number or no numbers are encountered
        double atof(str) - stands for ASCII to float. Converts str to the equivalent double value. 0.0 is returned if the first character is not a number or no numbers are encountered
        long int atol(str) Stands for ASCII to long int. Converts str to the equivalent long integer value. 0 is returned if the first character is not a number or no numbers are encountered

    */
    char input[10];
    int num;
    printf("Enter a number: ");
    scanf("%s", input);
    num = atoi(input); // atoi() lacks error handling, and it is recommended to use strtol() if you want to make sure that proper error handling is done
    printf("%d\n\n", num);

    /*
        Array of strings

    */
    char trip[3][15] = {
        "suitcase",
        "passport",
        "ticket",
    };
    for (int i = 0; i < 3; i++)
        printf("%s\n", trip[i]);
    putchar('\n');

    // another way
    char *trip2[] = {
        "suitcase",
        "passport",
        "ticket",
    };

    printf("Please bring the following:\n");
    for (int i = 0; i < 3; i++)
        printf("%s\n", trip[i]);

    // Keep in mind that a declaration like
    //      char *items[3];
    // only reserves space for three pointers; the actual strings are being referenced by those pointers

    return 0;
}