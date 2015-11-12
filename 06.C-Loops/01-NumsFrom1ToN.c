#include <stdio.h>

/*01.Write a program that enters from the console a positive integer n and prints all the numbers from 1 to n, on a single
 * line, separated by a space*/

int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        if(i == n)
        {
            printf("%d\n", i);
            break;
        }
        printf("%d ", i);
    }
    return 0;
}
