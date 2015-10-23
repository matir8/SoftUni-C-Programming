#include <stdio.h>

/*06. Write a program that finds the biggest of five numbers by using only five if statements.*/

int main()
{
    double a, b, c, d, e, max = 0;
    printf("Enter a, b, c, d and e, seperated by space: ");
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    
    if(a > max)
    {
        max = a;
    }
    if(b > max)
    {
        max = b;
    }
    if(c > max)
    {
        max = c;
    }
    if(d > max)
    {
        max = d;
    }
    if(e > max)
    {
        max = e;
    }
    printf("Max: %.2lf\n", max);
    return 0;
}
