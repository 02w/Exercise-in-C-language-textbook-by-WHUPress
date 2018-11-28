#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

char *exchange(long int num)
{
    char *p, *p1, *p2, temp;

    p = p1 = p2 = (char *)malloc(30 * sizeof(char));
    while (num)
    {
        *p2 = num % 10 + '0';
        p2++;
        num /= 10;
    }
    *p2 = '\0';
    p2--;

    while (p2 > p1)
    {
        temp = *p2;
        *p2 = *p1;
        *p1 = temp;
        p2--;
        p1++;
    }
    return p;
}

char *separate(long int num)
{
    char *p1, *p2 = exchange(num), *p3, *pt;
    int count = 1;

    p1 = p2;
    while (*(p2++) != '\0');
    p3 = p2 - 1;
    p2 = p2 - 2;

    while (p2 > p1)
    {
        if (count == 3)
        {
            pt = p3++;
            while (pt >= p2)
            {
                *(pt + 1) = *pt;
                pt--;
            }
            *p2 = ',';
            count = 1;
            p2--;
        }
        count++;
        p2--;
    }
    return p1;
}

int main(void)
{
    long int num;
    char *p;

    printf("Input a integer:");
    scanf("%ld", &num);
    p = separate(num);
    printf("Output:%s\n", p);

    system("pause");
    return 0;
}