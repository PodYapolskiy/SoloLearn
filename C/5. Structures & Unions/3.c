// Structures as Function Parameters
#include <stdio.h>
#include <string.h>

typedef struct
{
    int id;
    char title[40];
    float hours;
} course;

// Difference in declaration
void update_course(course *class); // Pointer to a structure
void display_course(course class); // Structure by value

void update_course(course *class)
{
    strcpy(class->title, "C++ Fundamentals");
    class->id = 111;
    class->hours = 12.30;
}

void display_course(course class)
{
    printf("%d\t%s\t%3.2f\n", class.id, class.title, class.hours);
}

int main()
{

    /*
            Structures as Function Parameters
        A function can have structure parameters that accept arguments by value when a copy of the structure variable is all that is needed.
        For a function to change the actual values in a struct variable, pointer parameters are required.
    */
    course cs2;
    update_course(&cs2);
    display_course(cs2);
    putchar('\n');

    // Array of Structures
    typedef struct
    {
        int h;
        int w;
        int l;
    } box;

    box boxes[3] = {{2, 6, 8}, {4, 6, 6}, {2, 6, 9}};
    int i, volume;

    for (i = 0; i < 3; i++)
    {
        volume = boxes[i].h * boxes[i].w * boxes[i].l;
        printf("box %d volume %d\n", i, volume);
    }

    return 0;
}