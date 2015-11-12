#include <stdio.h>
#include <stdlib.h>

int first_larger_than_neighbours(int sequence[]);

int main()
{
    int firstSequence[] = { 1, 3, 4, 5, 1, 0, 5 };
    int value = first_larger_than_neighbours(firstSequence);
    printf("%d", value);
    return 0;
}

int first_larger_than_neighbours(int sequence[])
{
    int k;
    int currentValue;

    for(k = 0; k < sizeof(sequence); k++)
    {
        if(k == 0)
        {
            if(sequence[k + 1] < sequence[k])
            {
                return k;
            }
        }
        else if(sequence[k - 1] < sequence[k] && sequence[k + 1] < sequence[k])
        {
            return k;
        }
    }
    return -1;
}
