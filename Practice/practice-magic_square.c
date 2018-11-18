#include <stdio.h>
#include <stdlib.h>
#define N 5

void readArray(int n, int x[][n])
{
    int i, j;
    printf("Input %d*%d matrix:\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
}

void printArray(int n, int x[][n])
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%4d", x[i][j]);
        }
        printf("\n");
    }
}

int isEqual(int n, int x[])
{
    int i;
    for (i = 1; i < n; i++)
    {
        if (x[i - 1] != x[i])
            return 0;
    }
    return 1;
}

int main(void)
{
    int i, j;
    int lineSum[N] = {}, rowSum[N] = {}, diagonalSum[2] = {};
    int a[N][N];
    readArray(N, a);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            lineSum[i] = lineSum[i] + a[i][j];
            rowSum[i] = rowSum[i] + a[j][i];
            if (i == j)
                diagonalSum[0] = diagonalSum[0] + a[i][i];
            if (i + j == N - 1)
                diagonalSum[1] = diagonalSum[1] + a[i][i];
        }
    }

    if ((isEqual(N, lineSum) == 1) && (isEqual(N, rowSum) == 1) && (isEqual(2, diagonalSum) == 1))
    {
        printf("It is a magic square!\n");
        printArray(N, a);
    }
    else
    {
        printf("It is not a magic square!\n");
    }
    system("pause");
    return 0;
}