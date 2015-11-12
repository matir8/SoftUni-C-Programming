#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int p = 0;
    scanf("%d", &n);
    scanf("%d", &p);
    int result = (~(1 << p)) & n;
    printf("%d\n", result);
    return 0;
}
