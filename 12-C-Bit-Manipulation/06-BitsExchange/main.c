#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int n = 0;
    scanf("%d", &n);
    unsigned int firstSet = (n >> 3) & 7;
    unsigned int secondSet = (n >> 24) & 7;

    n &= ~(7 << 24);
    n |= firstSet << 24;

    n &= ~(7 << 3);
    n |= secondSet << 3;

    printf("%d", n);
    return 0;
}
