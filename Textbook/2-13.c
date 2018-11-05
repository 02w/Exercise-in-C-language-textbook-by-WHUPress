#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void Add(int a, int b)
{
    if ((a > 0 && b > INT_MAX - a) || (a < 0 && b < INT_MIN - a))
    {
        /* handle overflow */
        printf("Error:a + b = Overflow!\n");
    }
    else
    {
        int result = a + b;
        printf("a + b = %d\n", result);
    }
}

void Multi(int a, int b)
{
    int result = a * b;
    if (!a || result / b != a)
    {
        /* handle overflow */
        printf("Error:a * b = Overflow!\n");
    }
    else
    {
        printf("a * b = %d\n", result);
    }
}

void Minus(int a, int b)
{
    if ((a > 0 && -b > INT_MAX - a) || (a < 0 && -b < INT_MIN - a))
    {
        /* handle overflow */
        printf("Error:a - b = Overflow!\n");
    }
    else
    {
        int result = a - b;
        printf("a - b = %d\n", result);
    }
}

void Divide(int a, int b)
{
    float result;
    result = (float)a / b;
    printf("a / b = %f\n", result);
}

void Mod(int a, int b)
{
    int result = a % b;
    printf("a %% b = %d\n", result);
}

int main(void)
{
    printf("Input two integers:\n");
    int num1 = 0, num2 = 0;
    if (scanf("%d %d", &num1, &num2) != 2)
    {
        printf("Input Error!\n");
    }
    else
    {
        Add(num1, num2);
        Minus(num1, num2);
        Multi(num1, num2);
        Divide(num1, num2);
        Mod(num1, num2);
    }
    system("pause");
    return 0;
}