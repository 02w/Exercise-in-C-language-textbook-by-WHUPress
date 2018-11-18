#include <stdio.h>
#include <stdlib.h>

void readArray(int n,int x[][n])
{
    int i, j;
    printf("Input %d*%d matrix:\n", n, n);
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &x[i][j]);
        }
    }
}

int main(void)
{
    int n, i, j;
    printf("Input n:");
    scanf("%d", &n);
    int a[n][n];
    int b[n][n];
    readArray(n, a);
    printf("The transposed matrix is:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            b[j][i] = a[i][j];
        }
    }
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%4d", b[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}