#include <stdio.h>

/*02.Which of the following values can be assigned to a variable of type float and which to a variable of type double:
34.567839023, 12.345, 8923.1234857, 3456.091? Write a program to assign the numbers in variables and
print them to ensure no precision is lost.*/


int main()
{
    double a = 34.567839023;
    float b = 12.345f;
    double c = 8923.1234857;
    double d = 3456.091;
    
    printf("%lf, %f, %lf, %lf\n", a, b, c, d);
    
	return 0;
}