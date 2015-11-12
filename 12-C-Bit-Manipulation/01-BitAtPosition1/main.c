#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int p = 1;
    int c = 3;
    scanf("%d", &n);
    int result1 = (n >> p) & 1;
    int result2 = (n >> c) & 1;
    printf("Bit at position 1:%d\n", result1);
    printf("Bit at position 3:%d\n", result2);
    return 0;
}
