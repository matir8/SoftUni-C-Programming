#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int p = 1;
    scanf("%d", &n);
    scanf("%d", &p);
    int result = (n >> p) & 1;
    printf("%d", result);
    return 0;
}
