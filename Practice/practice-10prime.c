#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MAX 10

int isPrime(int num)
{
    int temp = sqrt(num);
    int i = 0;
    for (i = 2; i <= temp; i++)
    {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int arraySum(int x[])
{
    int sum = 0, i = 0;
    for (i = 0; i < MAX; i++)
    {
        sum = sum + x[i];
    }
    return sum;
}

void printArray(int x[])
{
    int i;
    for (i = 0; i < MAX; i++)
    {
        printf("%6d", x[i]);
    }
    printf("\n");
}

int main(void)
{
    printf("Input n(n<=500):\n");
    int num, sum, i;
    int j = 10;
    if ((scanf("%d", &num) == 1) && (num >= 1) && (num <= 500))
    {
        int prime[MAX] = {};
        for (i = num; i > 1; i--)
        {
            if (isPrime(i) == 1)
            {
                j--;
                prime[j] = i;
            }
            if (j == 0)
                break;
        }
        printArray(prime);
        sum = arraySum(prime);
        printf("sum=%d\n", sum);
    }
    else
    {
        printf("Input Error!\n");
    }
    system("pause");
    return 0;
}