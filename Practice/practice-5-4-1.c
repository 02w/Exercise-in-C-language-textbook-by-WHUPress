#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(int x)
{
    double result = sqrt(6 * x + 2);
    return result;
}

int main(void)
{
    int i;
    double sum = 0;
    for(i = 0; i <= 1000; i+=50)
    {
        double result = f(i);
        sum += result;
        printf("x = %d\t\tf(x)=%f\t\tsum=%f\n", i, result, sum);
    }

    system("pause");
    return 0;
}