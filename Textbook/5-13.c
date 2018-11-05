#include <stdlib.h>
#include <stdio.h>
#define MAX 50

long fib(int num);
void push(int i);
int pop(void);
int stack[MAX];
int tos = 0;

int main(void)
{
    int seriesSize = 0;
    printf("Input n to calculate Fibonacci(n):\n");
    if (scanf("%d", &seriesSize) == 1 && seriesSize >= 0)
    {
        printf("Fibonacci(%d) = %d\n", seriesSize, fib(seriesSize));
    }
    else
    {
        printf("Input Error!\n");
    }

    system("pause");
    return 0;
}
long fib(int num)
{
    static int d = 0;
    int i;
    if (d == 0)
        push(0);
    d++;

    /* Format Output */
    for (i = 1; i < d * 6; i++)
    {
        printf(" ");
    }
    printf("NO.%d: num = %d\n", d, num);

    if (num == 0 || num == 1)
    {
        d = pop();
        return 1;
    }
    else
    {
        push(d);
        return (fib(num - 1) + fib(num - 2));
    }
}

void push(int i)
{
    if (tos >= MAX)
    {
        printf("Stack Full\n");
    }
    else
    {
    stack[tos] = i;
    tos++;
    }
}

int pop(void)
{
    tos--;
    if (tos < 0)
    {
        printf("Stack Underflow\n");
        return 0;
    }
    return stack[tos];
}