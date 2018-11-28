#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int substitute(char char1, char char2, char string[])
{
    int count = 0;
    int i;
    int length = strlen(string);
    for (i = 0; i <= length; i++)
    {
        if (char1 == string[i])
        {
            string[i] = char2;
            count++;
        }
    }
    return count;
}

int main(void)
{
    char string[MAX] = {};
    char c1, c2;
    int count = 0;
    printf("Input a string:\n");
    scanf("%1000s", string);
    fflush(stdin);
    printf("The character to be relpaced:\n");
    scanf("%c", &c1);
    fflush(stdin);
    printf("Replace %c with:\n",c1);
    scanf("%c", &c2);
    count = substitute(c1, c2, string);
    printf("%c is replaced by %c.\n%d times\n", c1, c2, count);
    printf("%s\n",string);

    system("pause");
    return 0;
}