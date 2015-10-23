#include <stdio.h>

/*12.Write an expression that checks if given positive integer number n (n ≤ 100) is prime (i.e. it is divisible without
 remainder only to itself and 1). Print true or false:*/
 
int main() 
{
    int n, i;
    printf("n: ");
    scanf("%d", &n);
    if(n <= 100)
    {
        i = 2;
        
        while(n % i != 0)
        {
            i=i+1;
        }
        
        if(i == n)
        {
            printf("true\n");
        }
        
        else
        {   
            printf("false\n");
        }
    }
    else
    {
        printf("Invalid input! Please enter an integer n <= 100.\n");
    }
    return 0;
}
