#include <stdio.h>

int main()
{
    int n;
    int remainder;
    int i = 0;
    int a[10];

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n)
    {
        remainder = n % 2;
        n = n / 2;
        a[i] = remainder;
        i++;
    }

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}
