#include <stdio.h>

/*09.Write a program that takes as input a four-digit number in format abcd (e.g. 2011) and performs the following:
 Calculates the sum of the digits (in our example 2+0+1+1 = 4).
 Prints on the console the number in reversed order: dcba (in our example 1102).
 Puts the last digit in the first position: dabc (in our example 1201).
 Exchanges the second and the third digits: acbd (in our example 2101).
 The number has always exactly 4 digits and cannot start with 0.*/

int main() 
{
    int n, a, b, c, d, sumOfDigits, reversedN, lastDigitInFirst, secondAndThirdExchanged;
    printf("N: ");
    scanf("%d", &n);
    
    a = (n / 1000) % 10;
    b = (n / 100) % 10;
    c = (n / 10) % 10;
    d = n % 10;
    
    sumOfDigits = a + b + c + d;
    reversedN = (d*1000) + (c*100) + (b*10) + a;
    lastDigitInFirst = (d*1000) + (a*100) + (b*10) + c;
    secondAndThirdExchanged = (a*1000) + (c*100) + (b*10) + d;
    
    printf("Sum of Digits: %d\n", sumOfDigits);
    printf("Reversed N: %d\n", reversedN);
    printf("Last Digit In First Position: %d\n", lastDigitInFirst);
    printf("Exchanged Second And Third Digit: %d\n", secondAndThirdExchanged);
    
    return 0;
}
