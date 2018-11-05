#include <stdio.h>
#include <stdlib.h>

float Multi(float a, float b)
{
    float result = a * b;
    if (!a || result / b - a == 0.000001)
    {
        /* handle overflow */
        printf("Error:Overflow!\n");
        system("pause");
        exit(0);
    }
    else
    {
        return result;
    }
}

int main(void)
{
    float f = 0, c = 0; /* f : Fahrenheit  c : Celsius */
    printf("Input Fahrenheit:");
    if (scanf("%f", &f) != 1)
    {
        printf("Error!\n");
    }
    else
    {
        float temp = 0;
        temp = (f - 32) / 9;
        c = Multi(temp, 5);
        printf("Output Celsius:%f\n", c);
    }
    system("pause");
    return 0;
}
