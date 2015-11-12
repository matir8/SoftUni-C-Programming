#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    int p = 1;
    int isBit1 = 0;
    scanf("%d", &n);
    scanf("%d", &p);
    int result = (n >> p) & 1;
    if(result == 1)
    {
        isBit1 = 1;
    }
    else
    {
        isBit1 = 0;
    }

    printf("%s", isBit1 ? "true" : "false");
    return 0;
}
