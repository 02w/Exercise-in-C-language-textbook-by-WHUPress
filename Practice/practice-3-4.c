#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a, b, c;
    int sum, product, min, max;
    double average;
    printf("Input a, b, c:\n");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    average = a / 3 + b / 3 + c / 3;
    product = a * b * c;
    min = a < b ? (a < c ? a : c) : (b < c ? b : c);
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("sum = %d\nproduct = %d\nmin = %d\nmax = %d\n", sum, product, min ,max);

    system("pause");
    return 0;
}