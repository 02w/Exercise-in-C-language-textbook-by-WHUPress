#include <stdio.h>
#include <stdlib.h>

void Converse(int n, int num)
{
    int i = num / n;
    if (i != 0)
    {
        Converse(n, i);
    }
    int d = num % n;
    char c;
    switch (d)
    {
    case 10:
        c = 'A';
        break;
    case 11:
        c = 'B';
        break;
    case 12:
        c = 'C';
        break;
    case 13:
        c = 'D';
        break;
    case 14:
        c = 'E';
        break;
    case 15:
        c = 'F';
        break;
    default:
        c = d + 48;  //ASCII
    }
    printf("%c", c);
}

int main(void)
{
    int n, num;

    do
    {
        setbuf(stdin, NULL);
        printf("Input a decimal number:");
        scanf("%d", &num);
        printf("Input the system you want to converse the number to:");
        scanf("%d", &n);
    } while ((num < 0) || (n < 2) || (n > 16));

    printf("Result:");
    Converse(n, num);
    printf("\n");

    system("pause");
    return 0;
}
