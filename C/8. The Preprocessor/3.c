// Predefined Macro Definitions
#include <stdio.h>
#include <string.h>

int main()
{
    /*
            Predefined Macros
        __DATE__ The current date as a string in the format Mm dd yyyy
        __TIME__ The current time as a string in the format hh:mm:ss
        __FILE__ The current filename as a string
        __LINE__ The current line number as an int value
    */
    char curr_time[10];
    char curr_date[12];

    strcpy(curr_time, __TIME__);
    strcpy(curr_date, __DATE__);
    printf("%s %s\n", curr_time, curr_date);
    printf("This is line %d\n", __LINE__);

    return 0;
}