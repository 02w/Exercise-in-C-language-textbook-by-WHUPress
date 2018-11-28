#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double D(double x1, double x2, double y1, double y2)
{
    double result = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
    return result;
}

int main(void)
{
    double x1, x2, y1, y2;
    printf("Input (x1,y1): ");
    scanf("%lf%lf", &x1,&y1);
    printf("Input (x2,y2): ");
    scanf("%lf%lf", &x2,&y2);
    double distance = D(x1,x2,y1,y2);
    printf("Distance: %lf\n", distance);

    system("pause");
    return 0;
}