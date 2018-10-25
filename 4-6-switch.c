#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    printf("Input P, W, S:\n");
    double P, W, S;
    if (scanf("%lf%lf%lf", &P, &W, &S) == 3 && P > 0 && W > 0 && S > 0)
    {
        double d, F;
        int a = (int)S / 250;
        switch (a)
        {
        case 0:
            d = 0;
            break;
        case 1:
            d = 0.02;
            break;
        case 2:
        case 3:
            d = 0.05;
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            d = 0.08;
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            d = 0.01;
            break;
        default:
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