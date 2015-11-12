#include <stdio.h>

/*06.Write a program to calculate the n
th Catalan number by given n (1 < n < 100)*/

int main() 
{
	int n;
	printf("n = ");
	scanf("%d", &n);

    long double nFactorial = 1;
    long double twoNFactorial = 1;
    long double nPlusOne = 1;
    long double catalan = 1;

    if (n >= 0)
    {
        int i, j;
        for (i = n, j = 2 * n; i >= 1; i--, j--)
        {
            nFactorial *= i;
            twoNFactorial *= j;
            nPlusOne = (n + 1) * i;
            catalan = twoNFactorial / (nPlusOne * nFactorial);
        }
        printf("Catalan(%.d) --> %.Lf\n", n, catalan);
    }
    else
    {
        printf("The number should be greater than 0 and less than 100");
    }
    return 0;
}
