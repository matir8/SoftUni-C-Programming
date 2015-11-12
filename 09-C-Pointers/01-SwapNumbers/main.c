#include <stdio.h>
#include <stdlib.h>

void swap(int* , int*);

void swap(int *first, int *second)
{
    int container;
    container = *first;
    *first = *second;
    *second = container;
}


int main()
{

    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);
    int *first = &a;
    int *second = &b;

    swap(&first, &second);
    printf("a: %d b: %d\n", *first, *second);
    return 0;
}
