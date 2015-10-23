#include <stdio.h>
#define FORMAT "|%-10X|%s|%10.2lf|%-10.3lf|\n"

/*04.Write a program that reads 3 numbers: an integer a (0 ≤ a ≤ 500), a floating-point b and a floating-point c and prints
them in 4 virtual columns on the console. Each column should have a width of 10 characters. The number a should
be printed in hexadecimal, left aligned; then the number a should be printed in binary form, padded with zeroes,
then the number b should be printed with 2 digits after the decimal point, right aligned; the number c should be
printed with 3 digits after the decimal point, left aligned.
*/

void intToBinary(int n, char* buffer, int len) 
{
	int i = len - 1;
	buffer[i] = '\0';
	i--;

	while (n > 0) 
        {
		int remainder = n % 2;
		buffer[i] = (remainder == 1 ? '1' : '0');
		n = n / 2;
		i--;
	}

	while (i >= 0) {
		buffer[i] = '0';
		i--;
	}
}

int main() {
	int a;
	float b, c;

	printf("a = ");
	scanf("%d", &a);
	printf("b = ");
	scanf("%f", &b);
	printf("c = ");
	scanf("%f", &c);

	char aToBinary[11];
	intToBinary(a, aToBinary, sizeof(aToBinary));
	
	printf(FORMAT, a, aToBinary, b, c);
	return 0;
