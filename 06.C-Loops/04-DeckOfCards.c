#include <stdio.h>

int main(int argc, char *argv[])
{
    char cards[13][3] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    char types[4] = {'C', 'D', 'H', 'S'};
    int rows = 0;
    int cols = 0;
    for(rows = 0; rows < 13; rows ++)
    {
        for(cols = 0; cols < sizeof(types); cols++)
        {
            printf("%s%c ", cards[rows], types[cols]);
        }
        
            printf("\n");
    }
	return 0;
}
