#include <stdio.h>

/*
 * 07.Write a program that enters a number n and after that enters more n numbers and calculates and prints their sum.
 */
 
int main() 
{
    int n, i;
    double a, sum;
    
    printf("Please enter N:\n");
    scanf("%d", &n);
    
    while(n<=0)
    {
        printf("Please enter valid N:\n");
        scanf("%d", &n);
    }
    
    for(i = 1; i<=n; i++)
    {
        scanf("%lf", &a);
        sum = sum + a;
    }
    
    printf("Sum: %.2lf\n", sum);
    return 0;
}
