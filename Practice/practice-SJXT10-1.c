#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double f(double x)
{
    return pow(x, 3) - pow(x, 2) - 3 * x + 12;
}

int main(void)
{
    double x, y;
    double x_init = 0.0, x_final = 1.0;
    int errno;
    FILE *fin, *fout;
    printf("f(x) from %f to %f step 0.1\n\n", x_init, x_final);

    if ((fin = fopen("D:\\my.in", "r")) == NULL)
    {
        printf("Unable to open file \"my.in\", the program will exit.\n");
        system("pause");
        exit(0);
    }
    if ((fout = fopen("D:\\my.out", "w")) == NULL)
    {
        printf("Unable to open file \"my.out\", the program will exit.\n");
        system("pause");
        exit(1);
    }

    if ((errno = fscanf(fin, "%g", &x_init)) == EOF)
    {
        printf("Unable to read file \"my.in\", the program will exit.\n");
        fprintf(fout, "%d", errno);
        system("pause");
        exit(2);
    }
    if ((errno = fscanf(fin, "%g", &x_final)) == EOF)
    {
        printf("Unable to read file \"my.in\", the program will exit.\n");
        fprintf(fout, "%d", errno);
        system("pause");
        exit(3);
    }

    fprintf(fout, "\n      x                 y    \n\n");

    for (x = x_init; x < x_final; x += 0.1)
    {
        y = f(x);
        printf("%f\n",x);
        fprintf(fout, "%8.2f    %15.2f\n", x, y);
    }

    fclose(fin);
    fclose(fout);

    system("pause");

    return 0;
}
