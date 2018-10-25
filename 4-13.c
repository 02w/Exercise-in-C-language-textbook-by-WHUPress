#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float x1 = -10, x2 = 10, x = 0;
    while (1)
    {
        float fx1 = 2 * x1 * x1 * x1 - 4 * x1 * x1 + 3 * x1 - 6;
        float fx2 = 2 * x2 * x2 * x2 - 4 * x2 * x2 + 3 * x2 - 6;
        float fx = 2 * x * x * x - 4 * x * x + 3 * x - 6;
        if (fx * fx1 < 0)
        {
            x2 = x;
        }
        else
        {
            x1 = x;
        }
        x = (x1 + x2) / 2;
        if (fabsf(fx) < 0.0000000001)
        {
            break;
        }
    }
    printf("The root is %f.\n", x);

    system("pause");
    return 0;
}