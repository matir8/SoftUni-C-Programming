#include <stdio.h>

int get_max(int a, int b);

int main() 
{
    int a, b;
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    
    int biggerNum = get_max(a, b);
    printf("%d\n", biggerNum);
    return 0;
}

int get_max(int a, int b)
{
    if(a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
