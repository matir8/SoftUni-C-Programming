#include <stdio.h>

/*
 * 03.Write a program that reads the radius r of a circle and prints its perimeter and area 
 * formatted with 2 digits after the decimal point.
 */
int main() 
{
    double r;
    double Pi = 3.14;
    scanf("%lf", &r);
    double perimeter = 2*Pi*r;
    double area = Pi*r*r;
    printf("Perimeter: %.2lf\nArea: %.2f\n", perimeter, area);
    
    return 0;
}
