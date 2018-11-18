#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int x, n;
    int a, b, c, d;

    printf("Input a positive integer shorter than 4 digits: ");
    scanf("%d", &x);
    if (x < 0 || x > 9999)
    {
        printf("Error!\n");
        system("pause");
        exit(0);
    }

    if (x > 999)
        n = 4;
    else if (x > 99)
        n = 3;
    else if (x > 9)
        n = 2;
    else
        n = 1;

    printf("%d digit(s)\n", n);
    
    a = x / 1000;
    b = x / 100 % 10;
    c = x / 10 % 10;
    d = x % 10;

    switch (n)
    {
    case 4:
        printf("%d * %d * %d * %d = %d\n", a, b, c, d, a * b * c * d);
        break;
    case 3:
        printf("%d * %d * %d = %d\n", b, c, d, b * c * d);
        break;
    case 2:
        printf("%d * %d = %d\n", c, d, c * d);
        break;
    default:
        printf("%d\n", d);
    }

    system("pause");
    return 0;
}