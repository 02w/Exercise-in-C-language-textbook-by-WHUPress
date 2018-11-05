#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
int GetDigit(int num, int digit)
{
    int digitnum = 0;
    // digitnum = (num / (int)pow(10,digit-1()) % 10;
    digitnum = (num % (int)pow(10, digit)) / (int)pow(10, digit - 1);
    return digitnum;
} 
This function doesn't work properly but I can't figure out where the error is.
*/

int main(void)
{
    printf("Input a 5-digit positive integer:\n");
    int num = 0;
    if ((scanf("%d", &num) != 1) || (num < 10000 || num > 99999))
    {
        printf("Input Error\n");
    }
    else
    {
        int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;
        d1 = num % 10;
        d2 = num % 100 / 10;
        d3 = num % 1000 / 100;
        d4 = num % 10000 / 1000;
        d5 = num / 10000;
        printf("  %d  %d  %d  %d  %d\n", d5, d4, d3, d2, d1);
        // printf("%3d%3d%3d%3d%3d\n", d5, d4, d3, d2, d1);
        
    }
    system("pause");
    return 0;
}
