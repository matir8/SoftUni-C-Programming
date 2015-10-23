#include <stdio.h>

/*
 * 01.Write a program that reads 3 real numbers from the console and prints their sum.
 */
int main() 
{
    double a;
    double b;
    double c;
    scanf("%lf %lf %lf", &a, &b, &c);
    double sum = a + b + c;
    printf("%.2lf\n", sum);

    
    return 0;
}
