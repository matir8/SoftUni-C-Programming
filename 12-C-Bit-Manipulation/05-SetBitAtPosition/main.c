#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int p = 0;
    int v = 0;
    int result = 0;
    scanf("%d", &n);
    scanf("%d", &p);
    scanf("%d", &v);
    if (v == 0)
    {
        result = (~(1 << p) & 1);
    }
    else if(v == 1)
    {
        result = n | (1 << p);
    }
    else
    {
        printf("Invalid input");
        return 1;
    }
    printf("%d", result);
    return 0;
}
