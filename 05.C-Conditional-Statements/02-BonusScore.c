#include <stdio.h>

/*02.Write a program that applies bonus score to given score in the range [1…9] by the following rules:
 If the score is between 1 and 3, the program multiplies it by 10.
 If the score is between 4 and 6, the program multiplies it by 100.
 If the score is between 7 and 9, the program multiplies it by 1000.
 If the score is 0 or more than 9, the program prints “invalid score”.*/

int main()
{
    int score = 0;
    printf("Score: ");
    scanf("%d", &score);
    
    if(score >= 1 && score <= 3)
    {
        score = score * 10;
        printf("New Score: %d\n", score);
    }
    else if((score >= 4 && score <= 6))
    {
        score = score * 100;
        printf("New Score: %d\n", score);
    }
    else if((score >= 7 && score <= 9))
    {
        score = score * 1000;
        printf("New Score: %d\n", score);
    }
    else
    {
        printf("Invalid score.The score should be between 1 and 9\n");
    }
    return 0;
}
