#include <stdio.h>

//11.Print the ASCII Table


int main()
{
    char ascii[128];
    for (int i = 1; i<=126; i++)
        {
            ascii[i]=i;
	    
	    if(i<31 || i == 127)
	    {
		printf("*"); //For the symbols that can't be displayed.

	    }
	    else
	    {
            	printf("%c", ascii[i]);
	    }
        }
    
	return 0;
}

