#include <stdio.h>
#include <stdlib.h>

void DecToSeptenary(int n)
{
    int i = n / 7;
    if (i != 0)
    {
        DecToSeptenary(i);
    }
    printf("%d", n % 7);
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
