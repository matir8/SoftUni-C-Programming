#include <stdio.h>

/*
 * 05.Write a program that enters 5 numbers (given in a single line, separated by a space), calculates and prints their
 * sum.
 */
 
int main() 
{
    double a;
    double b;
    double c;
    double d;
    double e;
    
    printf("Please enter five numbers, separeted by space:\n");
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    double sum = a + b + c + d + e;
    printf("Sum: %.2lf\n", sum);
    
    return 0;
}
