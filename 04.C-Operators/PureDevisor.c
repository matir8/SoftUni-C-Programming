#include <stdio.h>

//03.Write a program that prints if a number is divided by 9, 11 or 13 without remainder.
int main() 
{
    int n;
    scanf("%d", &n);
    if(n % 9 == 0 || n % 11 == 0 || n % 13 == 0)
    {
        printf("True.\n");
    }
    else
    {
        printf("False.\n");
    }
   
    return 0;
}
