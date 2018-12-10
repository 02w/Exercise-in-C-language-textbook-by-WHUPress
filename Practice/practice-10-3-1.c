#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double cubie(double x)
{
    return pow(x, 3) * exp(x * sin(x));
}

int main(void)
{
    double x, y;

    int errno;
    FILE *fin, *fout, *flog;
    printf("Calculte f(x)\n");

    if ((fin = fopen("D:\\experiment.in", "r")) == NULL)
    {
        printf("Unable to open file \"experiment.in\", the program will exit.\n");
        system("pause");
        exit(0);
    }
    if ((fout = fopen("D:\\experiment.out", "w")) == NULL)
    {
        printf("Unable to open file \"experiment.out\", the program will exit.\n");
        system("pause");
        exit(1);
    }
    if ((flog = fopen("D:\\experiment.log", "w")) == NULL)
    {
        printf("Unable to open file \"experiment.out\", the program will exit.\n");
        system("pause");
        exit(2);
    }

    if ((errno = fscanf(fin, "%lf", &x)) == EOF)
    {
        printf("Unable to read file \"experiment.in\", the program will exit.\n");
        fprintf(flog, "%d", errno);
        system("pause");
        exit(3);
    }
    while (feof(fin) == 0)
    {
        if (errno != 1)
        {
            fscanf(fin, "%c", &errno);
            fprintf(flog, "no number: %c\n", errno);
        }
        else if (x < 0)
            fprintf(flog, "<0: %f\n", x);
        else if (x > 20)
            fprintf(flog, ">20: %f\n", x);
        else
        {
            y = cubie(x);
            fprintf(fout, "%lf: %lf\n", x, y);
        }

        errno = fscanf(fin, "%lf", &x);
    }
    printf("Finish!\n");

    fclose(fin);
    fclose(fout);

    system("pause");

    return 0;
}