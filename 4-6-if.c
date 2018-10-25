#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Input P, W, S:\n");
    double P, W, S;
    /* use %lf to scan double */
    if (scanf("%lf%lf%lf", &P, &W, &S) == 3 && P > 0 && W > 0 && S > 0)
    {
        double d, F;
        if (S < 250)
        {
            d = 0;
        }
        else if (S < 500)
        {
            d = 0.02;
        }
        else if (S < 1000)
        {
            d = 0.05;
        }
        else if (S < 2000)
        {
            d = 0.08;
        }
        else if (S < 3000)
        {
            d = 0.1;
        }
        else
        {
            d = 0.15;
        }
        F = P * W * S * (1 - d);
        printf("The freight is %lf.\n", F);
    }
    else
    {
        printf("Input Error!\n");
    }
    system("pause");
    return 0;
}