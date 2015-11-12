#include <stdio.h>
#define BUFFER_SIZE 100

/*03.Write a program that reads from the console a sequence of n integer 
 * numbers and returns the minimal, the maximal number, the sum and the 
 * average of all numbers (displayed with 2 digits after the decimal point). 
 * Theinput starts by the number n (alone in a line) followed by n lines, 
 * each holding an integer number.
*/

int main()
{
    int a[BUFFER_SIZE], i, num, sum, min, max;
    double avg = 0;
    
    printf("Enter n: ");
    scanf("%d", &num);
    
    for(i = 0; i < num; i++)
    {
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    sum = 0;
    avg = 0;
    for(i = 0; i < num; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    
    for(i = 0; i < num; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    
    for(i = 0; i < num; i++)
    {
        sum = sum + a[i];
    }
    
    avg = sum / num;
    
    printf("Min = %d\n", min);
    printf("Max = %d\n", max);
    printf("Sum = %d\n", sum);
    printf("Avg = %.2lf\n", avg);
    return 0;
}
