#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int n, k;
    scanf("%d %d", &n, &k);
    
    unsigned long long factorial = 1;
        if (k > 1 && k < n && k < 100)
        {
            int i;
            for (i = k + 1; i <= n; i++)
            {
                factorial *= i;               
            }
            
            printf("Result: %llu\n", factorial);
        }
        else
        {
            printf("The numbers should be 1 < k < n < 100\n");
        }
    
    return (EXIT_SUCCESS);
}
s
