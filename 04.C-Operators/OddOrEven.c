#include <stdio.h>

//01.Write an expression that checks if given integer is odd or even.//

int main() 
{
    int n;
    scanf("%d", &n);
    if(n%2==0)
    {
        printf("Even.\n");
    }
    else 
    {
        printf("Odd.\n");
    }
        
    return 0;
}
