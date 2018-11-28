#include <stdio.h>
#include <stdlib.h>

long f(short int n)
{
    short int i;
    long tmp = 1;
    if (n >= 2)
        for (i = 1; i <= n; i++)
            tmp *= i;
    
    return tmp;
}

int main(void)
{
    short int a;
    long b;
    a = 10;
    b = f(a);
    printf("%d!=%ld\n",a,b);
    system("pause");
    return 0;
}
