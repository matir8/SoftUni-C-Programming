#include <stdio.h>

/*03.Classical play cards use the following signs to designate the card face: 2, 3, 4, 5, 6, 7, 8, 9, 10, J, Q, K and A. Write a
 * program that enters a string and prints “yes” if it is a valid card sign or “no” otherwise. .*/

int main()
{
    char card[1];
    printf("Card: ");
    scanf("%2s", &card);
        switch(card[0])
            {
                case '2': printf("yes\n");break;
                case '3': printf("yes\n");break;
                case '4': printf("yes\n");break;
                case '5': printf("yes\n");break;
                case '6': printf("yes\n");break;
                case '7': printf("yes\n");break;
                case '8': printf("yes\n");break;
                case '9': printf("yes\n");break;
                case '10': printf("yes\n");break;
                case 'J': printf("yes\n");break;
                case 'Q': printf("yes\n");break;
                case 'K': printf("yes\n");break;
                case 'A': printf("yes\n");break;
        
                default: printf("no\n");break;
            }
    return 0;
}
