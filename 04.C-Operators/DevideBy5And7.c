#include <stdio.h>

/*05.Write a Boolean expression that checks for given integer if it can be divided (without remainder) by 7 and 5 in the
same time.*/

int main() 
{
    int n;
    scanf("%d", &n);
    
    if(n % 5 == 0 && n % 7 == 0)
    {
        printf("True.\n");
    }
    else
    {
        printf("False.\n");
    }
    
    
    return 0;
}
