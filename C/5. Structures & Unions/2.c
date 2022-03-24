// Structures with structures
#include <stdio.h>
#include <string.h>

// Student Structure Definition
struct student
{
    char name[50];
    int number;
    int age;
};

// Struct pointer as a function parameter
void showStudentData(struct student *st) // student *st if it was 'typedef structure student'
{
    printf("\nStudent:\n");
    printf("Name: %s\n", st->name);
    printf("Number: %d\n", st->number);
    printf("Age: %d\n", st->age); //  (*st).age is the same as st->age.
}

int main()
{
    typedef struct
    {
        int x;
        int y;
    } point;

    typedef struct
    {
        float radius;
        point center;
    } circle;

    point p;
    p.x = 3;
    p.y = 4;

    circle c;
    c.radius = 3.14;
    c.center = p;

    // circle c = {3.14, {3, 4}};
    printf("Circle radius is %.2f, center is at (%d, %d)\n", c.radius, c.center.x, c.center.y);

    /*
            Pointers to Structures
        struct my_struct *struct_ptr;
        Defines a pointer to the my_struct structure.

        struct_ptr = &struct_var;
        Stores the address of the structure variable struct_var in the pointer struct_ptr.

        struct_ptr -> struct_mem;
        Accesses the value of the structure member struct_mem.

        The "->" operator allows to access members of the struct though the pointer.
    */
    // New Student Record Creation
    struct student st1;
    struct student st2;

    // Filling Student 1 Details
    strcpy(st1.name, "Krishna");
    st1.number = 5;
    st1.age = 21;

    // Filling Student 2 Details
    strcpy(st2.name, "Max");
    st2.number = 9;
    st2.age = 15;

    // Displaying Student 1 Details
    showStudentData(&st1);
    putchar('\n');

    // Displaying Student 2 Details
    showStudentData(&st2);

    return 0;
}