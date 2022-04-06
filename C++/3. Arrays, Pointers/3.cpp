// Static & Dynamic Memory
#include <iostream>
using namespace std;

int main()
{
    /*
                Memory
            The stack:
        All of your local variables take up memory from the stack.

            The heap:
        Unused program memory that can be used when the program runs to dynamically allocate the memory.


        You can allocate memory at run time within the heap for the variable of a given type using the new operator, which returns the address of the space allocated.

        new int; - This allocates the memory size necessary for storing an integer on the heap, and returns that address.
    */

    /*
            Dynamic Memory
        The allocated address can be stored in a pointer, which can then be dereferenced to access the variable.

        For local variables on the stack, managing memory is carried out automatically.

        On the heap, it's necessary to manually handle the dynamically allocated memory, and use the delete operator to free up the memory when it's no longer needed.
        Forgetting to free up memory that has been allocated with the new keyword will result in memory leaks, because that memory will stay allocated until the program shuts down.

        The delete operator frees up the memory allocated for the variable, but does not delete the pointer itself, as the pointer is stored on the stack.
        Pointers that are left pointing to non-existent memory locations are called dangling pointers.
    */
    int *p = new int; // Request memory
    *p = 5;           // Store value

    // We have dynamically allocated memory for an integer, and assigned it a value of 5
    // The pointer p is stored in the stack as a local variable, and holds the heap's allocated address as its value.
    // The value of 5 is stored at that address in the heap.

    cout << "*p = " << *p << endl; // Use value
    delete p;                      // Free up the memory
    // Now p is a dangling pointer

    int *ptr = NULL; // Null pointer is a good practice to assign pointer variable when you declare it, when you don't have exact address to be assigned

    // Dynamic memory for arrays
    int *pointer = NULL;
    pointer = new int[20];
    delete[] pointer;

    /*
            Dynamic Memory Usage
        Dynamic memory allocation is useful in many situations, such as when your program depends on input.
        As an example, when your program needs to read an image file, it doesn't know in advance the size of the image file and the memory necessary to store the image.
    */

    return 0;
}