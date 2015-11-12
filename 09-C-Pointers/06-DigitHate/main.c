#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* replace_digits(char* string, int lenght, int* digits);

int main()
{
    int digits = 0;
    int i;
    char *string = "The Cold War is believed to be between the period 1947-1999.";
    char *newString = replace_digits(string, strlen(string), &digits);

    printf("%s\n", newString);
    printf("Digits replaced: %d", digits);



    return 0;
}


char* replace_digits(char* string, int lenght, int* digits)
{
    int i;
    char* result = malloc(lenght * sizeof(char));
    for(i = 0; i < lenght; i++)
    {
        if(*(string + i) >= 48 && *(string + i) <= 57)
        {
            *(result + i) = '/';
            *digits += 1;
        }
        else
        {
            *(result + i) = *(string + i);
        }
    }
    return result;
}
