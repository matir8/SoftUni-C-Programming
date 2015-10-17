#include <stdio.h>

/*07.Declare two integer variables a and b and assign them with 5 and 10 and after that exchange their values by using
some programming logic. Print the variable values before and after the exchange.*/


int main()
{
    char ascii[128];
    for (int i = 1; i<=126; i++)
        {
            ascii[i]=i;
	    if(i>31)
	    {
            	printf("%c ", ascii[i]);
	    }
	    else
	    {
		printf("*"); //For the symbols that can't be displayed.

	    }
        }
    
	return 0;
}

