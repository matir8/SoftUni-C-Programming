#include <stdio.h>

/*
 * 07.Write a program that enters 3 real numbers and prints them sorted 
 * in descending order. Use nested if statements. Don’t use arrays and 
 * the built-in sorting functionality.
 */
int main() 
{
    double a, b, c;
    printf("Please enter the three numbers, seperated by space: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    if (a > b && a > c)
    {
        if (b > c)
        {
            printf("%.1lf %.1lf %.1lf\n", a, b, c);
        }
        else
        {
            printf("%.1lf %.1lf %.1lf\n", a, c, b);
        }
        }
    else if (a < b && b > c)
    {
        if (a > c)
        {
            printf("%lf %lf %lf\n", b, a, c);
        }
        else
        {
            printf("%.1lf %.1lf %.1lf\n", b, c, a);
        }
        }
    else
    {
        if (a > b)
        {
            printf("%.1lf %.1lf %.1lf\n", c, a, b);
        }
        else
        {
            printf("%.1lf %.1lf %.1lf\n", c, b, a);
        }
    }

    return 0;
}
