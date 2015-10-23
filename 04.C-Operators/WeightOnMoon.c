#include <stdio.h>

/*04.The gravitational field of the Moon is approximately 17% of that on the Earth. Write a program that calculates
the weight of a man on the moon by a given weight on the Earth.*/

int main() 
{
    double weight;
    printf("Weight: ");
    scanf("%lf", &weight);
    
    double weightOnMoon = (17.0 / 100) * weight;
    printf("Weight on Moon: %.3lf\n", weightOnMoon);
   
    return 0;
}
