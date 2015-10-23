#include <stdio.h>

/*11. Write an expression that checks if given point
 (x, y) is inside a circle K({0, 0}, 2)*/
 
int main() 
{
    float x, y;
    int r = 2;
    
    printf("X: ");
    scanf("%f", &x);
    printf("Y: ");
    scanf("%f", &y);
    
    if((x * x) + (y * y) <= r * r)
    {
        printf("Yes.\n");
    }
    else
    {
        printf("No.\n");
    }
    return 0;
}
