#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 21

int main()
{
    char input[BUFFER_SIZE];
    fgets(input, BUFFER_SIZE - 1, stdin);
    size_t length = strlen(input);
    char star[21 - length];
    if(input[length - 1] == '\n')
    {
        input[length - 1] = '\0';
    }
    if(length < BUFFER_SIZE)
    {
        memset(star, '*', 20 - length);
        star[BUFFER_SIZE - 1] = '\0';
        strncat(input, star, BUFFER_SIZE);
    }
    printf("%s", input);

    return 0;
}
