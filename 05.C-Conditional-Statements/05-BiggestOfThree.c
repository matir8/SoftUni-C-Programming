#include <stdio.h>

//*05.Write a program that finds the biggest of three numbers. */

int main()
{
    double a, b, c;
    printf("Enter a, b and c, seperated by space: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a == 0 || b == 0 || c == 0)
        {
            printf("0\n");
        }
        else if (a > 0 && b > 0 && c > 0)
        {
            printf("+\n");
        }
        else if (a < 0 && b < 0 && c < 0)
        {
            printf("-\n");
        }
        else if ((a < 0 ^ b < 0) && c > 0)
        {
            printf("-");
        }
        else if (a > 0 && (b < 0 ^ c < 0))
        {
            printf("-\n");
        }
        else
        {
            printf("+\n");
        }
    return 0;
}
