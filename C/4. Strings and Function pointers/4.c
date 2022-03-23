// Function Pointers
#include <stdio.h>

void say_hello(int num_times)
{
    int k;
    for (k = 0; k < num_times; k++)
        printf("Hello\n");
}

int add(int x, int y) { return (x + y); }

int subtract(int x, int y) { return (x - y); }

int multiply(int x, int y) { return (x * y); }

int divide(int x, int y)
{
    if (y != 0)
        return (x / y);
    else
        return 0;
}

int main()
{
    /*
        Function pointers point to executable code for a function in memory.
        They can be stored in an array or passed as arguments to other functions.
        A function pointer declaration uses the * just as you would with any pointer:
            return_type (*func_name)(parameters)
        The parentheses around (*func_name) are important. Without them, the compiler will think the function is returning a pointer.

    */
    /*
    The following short program declares a function, declares a function pointer, assigns the function pointer to the function, and then calls the function through the pointer:
    */
    void (*funcptr)(int);
    // funcptr = &say_hello; - & isn't necessary
    funcptr = say_hello; // A function name points to the start of executable code, just as an array name points to its first element
    funcptr(3);
    putchar('\n');

    /*
            Array of Function Pointers
        An array of function pointers can replace a switch or an if statement for choosing an action.
        Each array element must have the same parameters and return type.
    */
    int x, y, choice, result;
    int (*op[4])(int, int); // op is array of function pointers

    op[0] = add;
    op[1] = subtract;
    op[2] = multiply;
    op[3] = divide;
    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);
    printf("Enter 0 to add, 1 to subtract, 2 to multiply, or 3 to divide: ");
    scanf("%d", &choice);
    result = op[choice](x, y);
    printf("\nResult is %d\n\n", result);

    /*
            Void Pointer
        A void pointer is used to refer to any address type in memory and has a declaration that looks like:
            void *ptr;

        You cannot perform pointer arithmetic with void pointers.
    */
    int i = 33;
    float f = 12.4;
    char c = 'a';
    void *ptr;

    // When dereferencing a void pointer, you must first type cast the pointer to the appropriate data type before dereferencing with *
    ptr = &i;
    printf("void ptr points to %d\n", *((int *)ptr));
    ptr = &f;
    printf("void ptr points to %f\n", *((float *)ptr));
    ptr = &c;
    printf("void ptr points to %c", *((char *)ptr));

    return 0;
}