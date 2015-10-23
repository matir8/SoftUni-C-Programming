#include <stdio.h>

//02.Write a program that that prints if the number is both greater than 20 and odd.even.//

int main() 
{
    int n;
    scanf("%d", &n);
    if(n % 2 != 0 && n > 20)
    {
        printf("True\n");
    }
    else 
    {
        printf("False.\n");
    }
        
    return 0;
}
