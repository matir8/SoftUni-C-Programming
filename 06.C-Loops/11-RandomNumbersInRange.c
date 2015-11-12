#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int  n, min, max;
    printf("n = ");
    scanf("%d", &n);
    printf("min = ");
    scanf("%d", &min);
    printf("max = ");
    scanf("%d", &max);
    
    int i = 0;
    for(i = n; n > 0; n--)
    {
        int random = rand() % (max + 1 - min) + min;
            printf("%d ", random);
    }
    printf("\n");
    return (EXIT_SUCCESS);
}

