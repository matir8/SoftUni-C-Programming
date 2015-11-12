#include <stdio.h>

/*02.Write a program that enters from the console a positive integer n and prints all the numbers from 1 to n not
divisible by 3 and 7, on a single line, separated by a space.*/

int main()
{
    int n, i;
    printf("Enter n: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        if(i % 3 == 0 || i % 7 == 0)
        {
            continue;
        }
        if(i == n)
        {
            printf("%d\n", i);
            break;
        }
        printf("%d ", i);
    }
    return 0;
}
