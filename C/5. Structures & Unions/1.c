// Structures
#include <stdio.h>
#include <string.h>

int main()
{
    /*
            Structure
        A structure is a user-defined data type that groups related variables of different data types.

        struct tag {
            type: var_name,
            ...
        }

        A structure is also called a composite or aggregate data type.
    */
    struct course
    {
        int id;
        char title[40];
        float hours;
    };

    // To declare variables of a structure data type, you use the keyword struct followed by the struct tag, and then the variable name
    struct student
    {
        int age;
        int grade;
        char name[40];
    };
    struct student s1 = {18, 11, "Jonh"};
    struct student s2;
    s2 = (struct student){17, 10, "Alex"};                          // Don't forget about type casting
    struct student s3 = {.grade = 9, .age = 16, .name = "Michael"}; // References without special order

    // A struct variable is stored in a contiguous block of memory
    // The sizeof operator must be used to get the number of bytes needed for a struct, just as with the basic data types.
    printf("sizeof(s1) = %d\n", sizeof(s1)); // 48 = 4 (int) + 4 (int) + 40 (char[40])

    // Accessing Structure Members
    printf("s3.age = %d\n", s3.age); // 16

    s1 = s2;                           // Assign one structure to another of the same type:
    printf("s1.name = %s\n", s1.name); // Alex

    s2.age = 18;
    s2.grade = 11;
    strcpy(s2.name, "John"); // String assignment requires

    /*
            Typedef
        The typedef keyword creates a type definition that simplifies code and makes a program easier to read.
        Typedef is commonly used with structures because it eliminates the need to use the keyword struct when declaring variables.
    */
    typedef struct
    {
        int id;
        char title[40];
        float hours;
    } other_course;

    other_course c1;

    return 0;
}