// Functions
#include <iostream>
using namespace std;

// Declaration (function prototype)
void printSomething(char name[]);

int main()
{
    /*
            Functions
        return_type function_name( parameter list )
        {
            body of the function
        }

        Functions are defined with the keyword void perform the desired operations without returning a value.
        void is a basic data type that defines a valueless state.

        Function declaration is required when you define a function in one source file and you call that function in another file.
        In such case, you should declare the function at the top of the file calling the function.
    */
    printSomething("Alex");

    return 0;
}

// Definition
void printSomething(char name[])
{
    cout << "Hi, " << name << "!" << endl;
}