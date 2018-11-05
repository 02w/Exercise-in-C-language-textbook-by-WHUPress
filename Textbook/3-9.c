#include <stdlib.h>
#include <stdio.h>

double Multi(double a, double b)
{
    double result = a * b;
    if (!a || (result / b - a) > 0.000000001)
    {
        /* handle overflow */
        printf("Error: Overflow!\n");
        return 0;
    }
    else
    {
        return result;
    }
}

int main(void)
{
    printf("Input Mile: ");
    double mile, kilometre;
    scanf("%lf", &mile);
    double convert = 5280 * 12 * 2.54 / 100000;
    kilometre = Multi(mile, convert);
    printf("Kilometre: %f\n", kilometre);

    system("pause");
    return 0;
}
