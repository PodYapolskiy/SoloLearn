// Conditional Compilation Directives
#include <stdio.h>

#define LEVEL 4

int main() {
    /*
        Conditional compilation of segments of code is controlled by a set of directives: #if, #else, #elif, and #endif.


        #if !defined(LEVEL)
            // statements
        #endif

        The #if is evaluated using data available to the preprocessor, which then sends only the true branch for compilation.
        An if statement uses data provided at runtime with the possibility of branching to any else clause.
    */
    #if LEVEL > 6
        // Do something
    #elif LEVEL > 5
        // Else if branch
    #elif LEVEL > 4
        // Another else if
    #else
        // Last option here
    #endif

    return 0;
}