#include <stdio.h>

/*04.Write a program that shows the sign (+, - or 0) of the product of three real numbers, without calculating it. Use a
sequence of if operators.*/

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
