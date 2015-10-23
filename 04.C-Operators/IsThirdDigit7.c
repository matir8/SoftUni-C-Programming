#include <stdio.h>

/*07.Write an expression that checks for given integer if its
 * third digit from right-to-left is 7. Print true or false */

int main() 
{
    int n, thirdDigit;
    printf("n: ");
    scanf("%d", &n);
    
    thirdDigit = (n / 100) % 10;
    
    if(thirdDigit == 7)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}
