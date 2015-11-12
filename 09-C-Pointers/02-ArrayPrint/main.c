#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nums[] = {2, 5, 8, 9, 12345, 0,22, 42};
    int i;
    int lenght = sizeof(nums) / sizeof(int);
    for(i = 0; i < lenght; i++)
    {
        printf("%d ", *(nums + i));
    }
    return 0;
}
