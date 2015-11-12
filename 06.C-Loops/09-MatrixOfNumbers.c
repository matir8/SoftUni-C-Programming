#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n = 0;
    printf("n: ");
    scanf("%d", &n);
    
    int rows, cols;
        for (rows = 0; rows < n; rows++)
        {
            for (cols = rows + 1; cols <= n + rows; cols++)
            {
                printf("%d ", cols);
            }

            printf("\n");
        }
    
    return (EXIT_SUCCESS);
}

