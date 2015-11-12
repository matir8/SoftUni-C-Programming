#include <stdio.h>
#include <stdlib.h>

/*
 * The int in the new_integer() function is initialized in the stack and on the new_integer_ptr() on the heap.
 * So it can be unsafe to use the second one on the stack because we may access memory that is outside our program.
 */

int new_integer();
int* new_integer_ptr();

int main()
{
    printf("%d\n", new_integer());
    int *number = new_integer_ptr();
    printf("%d\n", number);

    return 0;
}

int new_integer()
{
    int newInt = 42;
    return newInt;
}

int* new_integer_ptr()
{
    int *newInt = 23;
    return newInt;
}
