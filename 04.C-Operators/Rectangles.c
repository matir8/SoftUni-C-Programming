#include <stdio.h>

/*06.Write an expression that calculates rectangle’s 
 * perimeter and area by given width and height. */

int main() 
{
    double width, height;
    printf("Width: ");
    scanf("%lf", &width);
    printf("Height: ");
    scanf("%lf", &height);
    
    double perimeter = 2 * (width + height);
    double area = width * height;
    
    printf("Perimeter: %.1lf\n", perimeter);
    printf("Area: %.1lf\n", area);
    return 0;
}
