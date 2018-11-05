#include <stdio.h>
#include <stdlib.h>

long fib(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        int result = fib(n - 1) + fib(n - 2);
        return result;
    }
}

int main(void)
{
    int n;
    printf("Input n to calculate Fibonacci(n):\n");
    if (scanf("%d", &n) == 1)
    {
        printf("Fibonacci(%d) = %ld\n", n, fib(n));
    }
    system("pause");
    return 0;
}