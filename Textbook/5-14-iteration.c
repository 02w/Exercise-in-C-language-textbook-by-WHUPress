#include <stdio.h>
#include <stdlib.h>
#define MAX 100

void DecToSeptenary(int n)
{
    int i = 0;
    char sep[MAX];
    while(n)
    {
        sep[i] = n % 7 + '0';
        n = n / 7;
        i++;
    }
    while(i >= 0)
    {
        i--;
        putchar(sep[i]);
    }
}

int main(void)
{
    int num;
    printf("Input a decimal number:\n");
    do
    {
        scanf("%d", &num);
    } while (num < 0);
    
    printf("The septenary number is:");
    DecToSeptenary(num);
    printf("\n");

    system("pause");
    return 0;
}
