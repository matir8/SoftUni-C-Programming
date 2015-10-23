#include <stdio.h>

/*
 * 08.Write a program that asks for a digit (0-9), and depending on the input, shows the digit as a word (in English). Print
 * “not a digit” in case of invalid inut. Use a switch statement. 
 */
int main() 
{
    int digit;
    printf("Enter digit: ");
    scanf("%d", &digit);
    
    if(digit <= 9 && digit >= 0){
        switch(digit)
        {
            case 0: printf("Zero.\n");break;
            case 1: printf("One.\n");break;
            case 2: printf("Two.\n");break;
            case 3: printf("Three.\n");break;
            case 4: printf("Four.\n");break;
            case 5: printf("Five.\n");break;
            case 6: printf("Six.\n");break;
            case 7: printf("Seven.\n");break;
            case 8: printf("Eight.\n");break;
            case 9: printf("Nine.\n");break;
    
            default: printf("Not a digit.\n");
        }
    }
    else{
            printf("Not a digit.\n");
    }
    
    
    return 0;
}
