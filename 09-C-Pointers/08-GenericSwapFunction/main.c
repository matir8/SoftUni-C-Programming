#include <stdio.h>
#include <stdlib.h>

void swap(void *a, void *b, size_t size) {
    char *aPtr = a;
    char *bPtr = b;
    int i;
    for (i = 0; i < size; i++) {
        char tempByte = aPtr[i];
        aPtr[i] = bPtr[i];
        bPtr[i] = tempByte;
    }
}

int main() {
    char letter = 'B', symbol = '+';
    swap(&letter, &symbol, sizeof(char));
    printf("%c %c\n", letter, symbol);

    int a = 10, b = 6;
    swap(&a, &b, sizeof(int));
    printf("%d %d\n", a, b);

    double d = 3.14, f = 1.23567;
    swap(&d, &f, sizeof(double));
    printf("%.f2 %.f2\n", d, f);

    return 0;
}
