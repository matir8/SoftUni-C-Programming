#include <stdio.h>
#include <math.h>

/*07. Create a console application that calculates and prints the 
square root of the number 12345.Extra:
Modify your program to read the number from the console. Use the scanf() function.*/
int main() 
{
    double x;
    scanf("%lf", &x);	
    printf("The square root of %lf is %lf.\n", x, sqrt(x));
    return 0;
}


