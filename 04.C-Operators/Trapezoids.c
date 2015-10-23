#include <stdio.h>

/*13. Write an expression that calculates trapezoid's 
 * area by given sides a and b and height h.*/
 
int main() 
{
    double a, b, h, area;
    printf("a: ");
    scanf("%lf", &a);
    
    printf("b: ");
    scanf("%lf", &b);
    
    printf("h: ");
    scanf("%lf", &h);
    
    if(a <= 0 || b <= 0 || h <= 0)
    {
        printf("Invalid input!\n");
        return 1;
    }
    
    else
    {
        area = ((a + b) / 2.0) * h;
        printf("Area: %.2lf\n", area);
    }
    
    return 0;
}
