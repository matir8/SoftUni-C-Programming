#include <stdio.h>

/*01.Write an if-statement that takes two integer variables a and b and exchanges their values if the first one is greater
than the second one. As a result print the values a and b, separated by a space*/

int main()
{
    double a, b;
    printf("Please enter a and b, seperated by a space: ");
    scanf("%lf %lf", &a, &b);
    
    if(a > b)
    {
        a = a + b;
        b = a - b;
        a = a - b;
    }
    
    printf("%.1lf %.1lf\n", a, b);
    return 0;
}
