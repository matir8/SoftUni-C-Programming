#include <stdio.h>

/*07.Declare two integer variables a and b and assign them with 5 and 10 and after that exchange their values by using
some programming logic. Print the variable values before and after the exchange.*/


int main()
{
    int a = 5;
    int b = 10;
    
    printf("a = %d\nb = %d\n", a, b);
    
    a = a+b;
    b = a-b;
    a = a-b;
    
    printf("a = %d\nb = %d\n", a, b);
    
	return 0;
}

