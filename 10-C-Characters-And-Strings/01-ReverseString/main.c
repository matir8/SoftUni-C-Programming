#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *input = NULL;
    size_t size = 0;
    getline(&input, &size, stdin);
    size_t length = strlen(input);
    char rev[length];
    int i, n;
    for(i = 0, n = length - 1; i < length; i++, n--)
    {
        rev[i] = input[n];
    }
    rev[i] = '\0';
    printf("%s", rev);
    return 0;
}
