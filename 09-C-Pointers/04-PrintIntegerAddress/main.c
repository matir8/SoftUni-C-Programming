#include <stdio.h>
#include <stdlib.h>

void print(int);

void print(n)
{
    printf("Address on integer in the print function: %p\n", &n);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    print(n);
    printf("Address on integer in the main function:  %p\n", &n);
    return 0;
}
