#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//12.Create a console application that prints the current date and time.

void main() 
{
    time_t t;
    time(&t);

    printf("Today's date and time : %s",ctime(&t));

}

