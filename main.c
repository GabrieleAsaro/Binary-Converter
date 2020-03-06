#include <stdio.h>

int main() {
    int decimalNum, rest, i = 0;
    char* result = "";

    puts("Decimal Number: \n");
    scanf("%d", &decimalNum);

    while (decimalNum > 0) {
        rest = decimalNum % 2;
        decimalNum /= 2;
        *(result + i) = '0' + rest;
        i++;
    }

    for(int j = i-1; j >= 0; j--){
        putchar(*(result + j));
    }

    return 0;

}