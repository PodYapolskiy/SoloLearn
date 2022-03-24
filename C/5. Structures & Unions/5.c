// Pointers to Unions
#include <stdio.h>

union id
{
    int id_num;
    char name[20];
};

// A function can have union parameters that accept arguments by value when a copy of the union variable is all that is needed
void set_id(union id *item) { item->id_num = 42; } // To change the actual value in a union memory location, pointer parameters are required
void show_id(union id item) { printf("ID is %d", item.id_num); }

int main()
{
    union val
    {
        int int_num;
        float fl_num;
        char str[20];
    };
    union val info;
    union val *ptr = NULL;
    ptr = &info;
    ptr->int_num = 10; // (*ptr).int_num = 10;
    /*
        * Возвращение объекта по адресу
        & Возвращения адреса объекста
    */
    printf("%d\n", info.int_num);

    return 0;
}