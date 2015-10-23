#include <stdio.h>

/*
 * 06.Write a program that reads an integer number n from the console and prints all the numbers in the interval [1..n],
 * each on a single line.
 */
 
int main() 
{
    unsigned char n;
    int i;
    printf("Please enter n:");
    scanf("%d", &n);
    
    for(i = 1; i<=n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
