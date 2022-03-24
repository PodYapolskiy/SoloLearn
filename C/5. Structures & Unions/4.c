// Unions
#include <stdio.h>
#include <string.h>

int main()
{
    /*
            Unions
        A union allows to store different data types in the same memory location.
        Union variable uses the same memory location for all its member's and only one member at a time can occupy the memory location.
        Unions are used for memory management. The largest member data type is used to determine the size of the memory to share and then all members use this one location.
    */
    union val
    {
        int int_num;
        float fl_num;
        char str[20];
    };
    union val u1, u2;
    u2 = u1;

    /*
            Accessing Union Members
        When assignment is performed, the union memory location will be used for that member until another member assignment is performed.
        Trying to access a member that isn't occupying the memory location gives unexpected results.
    */
    union val test;
    test.int_num = 123;
    test.fl_num = 123.76;
    strcpy(test.str, "hello");

    // The last assignment overrides previous assignments, which is why str stores a value and accessing int_num and fl_num is meaningless.
    printf("%d\n", test.int_num); // sm-th unexpectable
    printf("%f\n", test.fl_num);  // sm-th unexpectable
    printf("%s\n\n", test.str);

    /*

    */
    typedef struct
    {
        char make[20];
        int model_year;
        int id_type; // 0 for id_num, 1 for VIN
        union
        {
            int id_num;
            char VIN[20];
        } id;
    } vehicle;

    vehicle car1;
    strcpy(car1.make, "Ford");
    car1.model_year = 2017;
    car1.id_type = 0;
    car1.id.id_num = 123098;

    printf("Make: %s\n", car1.make);
    printf("Model Year: %d\n", car1.model_year);
    if (car1.id_type == 0)
        printf("ID: %d\n", car1.id.id_num);
    else
        printf("ID: %s\n", car1.id.VIN);

    return 0;
}