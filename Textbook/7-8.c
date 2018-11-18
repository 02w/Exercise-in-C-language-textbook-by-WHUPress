#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int checkTotal(char str[])
{
    int countLeft = 0, countRight = 0;
    int i;
    char c;
    for (i = 0; (c = str[i]) != '\0'; i++)
    {
        if (c == '(')
            countLeft++;
        if (c == ')')
            countRight++;
    }
    if (countLeft == countRight)
        return 1;
    else
        return 0;
}

int checkCurrent(char str[])
{
    int countLeft = 0, countRight = 0;
    int i;
    char c;
    for (i = 0; (c = str[i]) != '\0'; i++)
    {
        if (c == '(')
            countLeft++;
        if (c == ')')
        {
            countRight++;
            if (countLeft < countRight)
                return 0;
        }
    }
    return 1;
}

int main(void)
{
    char str[MAX + 1];
    printf("Input a string(<=100 chars):\n");
    scanf("%100s", str);
    
    if (checkTotal(str) == 1)
        printf("(1):Yes!\n");
    else
        printf("(1):No!\n");

    if (checkCurrent(str) == 1)
        printf("(2):Yes!\n");
    else
        printf("(2):No!\n");
    
    system("pause");
    return 0;
}
