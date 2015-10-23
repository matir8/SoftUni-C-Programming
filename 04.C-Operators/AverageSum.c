#include <stdio.h>

/*07.Write a program that finds the average of the sum of 3 numbers.*/

int main() 
{
    double a, b, c = 0;
    printf("a: ");
    scanf("%lf", &a);
    
    printf("b: ");
    scanf("%lf", &b);
    
    printf("c: ");
    scanf("%lf", &c);
    
    double average = (a + b + c) / 3.0;
    printf("Average: %.5lf\n", average);
    
    return 0;
}
