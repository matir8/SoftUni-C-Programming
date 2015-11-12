#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
    int n, x;
    scanf("%d %d", &n, &x);
    
    double sum = 1;
    int i;
    double nominator = 1, denominator = 1;
    for (i = 1; i <= n; i++)
    {
        nominator *= i;
        denominator *= x;
        sum += nominator / denominator;
    }
    
    printf("%.5f\n", sum);
    
    return (EXIT_SUCCESS);
}

