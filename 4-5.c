#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    printf("Input three intergers a, b, c:\n");
    int a = 0, b = 0, c = 0;
    if (scanf("%d %d %d", &a, &b, &c) == 3)
    {
        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                    printf("R\n");
                else
                    printf("No Root!\n");
            }
            else
            {
                double root = -c / b;
                printf("x = %f\n", root);
            }
        }
        else
        {
            int delta = b * b - 4 * a * c;

            if (delta < 0)
            {
                printf("No Root!\n");
            }
            else
            {
                double root1 = 0, root2 = 0;
                root1 = -b / 2 * a + sqrt(delta) / 2 * a;
                root2 = -b / 2 * a - sqrt(delta) / 2 * a;
                if (root1 == root2)
                    printf("x1 = x2 = %f\n", root1);
                else
                    printf("x1 = %f\nx2 = %f\n", root1, root2);
            }
        }
    }
    else
        printf("Input Error!\n");

    system("pause");
    return 0;
}