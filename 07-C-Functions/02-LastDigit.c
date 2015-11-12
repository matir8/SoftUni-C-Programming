#include <stdio.h>

char* get_last_digit(long a);

int main() 
{
    int n;
    printf("Number: ");
    scanf("%d", &n);
    
    char* numAsWord = get_last_digit(n);
    printf("%s\n", numAsWord);
    return 0;
}

char* get_last_digit(long a)
{
    long last = a % 10;
    
    switch (last)
    {
        
        case 0: return("Zero");break;
        case 1: return("One");break;
        case 2: return("Two");break;
        case 3: return("Three");break;
        case 4: return("Four");break;
        case 5: return("Five");break;
        case 6: return("Six");break;
        case 7: return("Seven");break;
        case 8: return("Eight");break;
        case 9: return("Nine");break;
    }   
}
