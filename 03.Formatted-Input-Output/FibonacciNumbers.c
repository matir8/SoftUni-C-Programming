#include <stdio.h>
/*
 * 08.Write a program that reads a number n and prints on the console the first n members of the Fibonacci sequence (at 
 * a single line, separated by spaces) : 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, …
 */
int main() 
{
   int x = 0;
   int y = 0;
   int z = 0;
   int n = 0;
   int i = 0;
   
   printf("Please enter N:");
   scanf("%d", &n);
   
   if(n<=0)
   {
       printf("Please enter valid N:");
       scanf("%d", &n);
   }
   
   x = 0;
   y = 1;
   
   while(i<n)
   {
       printf("%d ", x);
       z=x+y;
       y=x;
       x=z;
       i=i+1;
       
   }
}
