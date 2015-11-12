#include <stdio.h>

int last_char_occurance(char* string, char ch);
int main() 
{
    char str[50];
    char ch[2];
    printf("Enter a string: ");
    fgets(str, 50, stdin);
    printf("Enter a char: ");
    fgets(ch, 50, stdin);
    
    int result = last_char_occurance(str, ch[0]);
    printf("%d", result);
    return 0;
}

int last_char_occurance(char* string, char ch)
{
    
    int i, index = -1;
    for (i = 0; i < strlen(string); i++)
    {
        if (string[i] == ch)
        {
            index = i;
        }
    }
    
    return index;
}
        