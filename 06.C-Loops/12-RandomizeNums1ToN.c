#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);
    
    int numbers[n];
        int i;
        for (i = 0; i < n; i++)
        {
            numbers[i] = 0;
        }
        
        for (i = 0; i < n; i++)
        {
            int random = (rand() % n);
            if (numbers[random] == 0)
            {
                printf("%d ", random + 1);
                numbers[random] = 1;
            }
            else
            {
                i--;
            }
        }
        printf("\n");
    
    return (EXIT_SUCCESS);
}

