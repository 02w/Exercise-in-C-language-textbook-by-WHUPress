#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define MAX 100

int countKeyword(char word[], char string[])
{
    int count = 0;
    int lenWord = strlen(word), lenString = strlen(string);
    int j, i;
    char temp[lenWord + 1];
    for (j = 0; j < (lenString - lenWord + 1); j++)
    {
        for (i = 0; i < lenWord; i++)
        {
            temp[i] = string[i + j];
            temp[lenWord] = '\0';
        }
        if (strcmp(word, temp) == 0)
            count++;
    }
    return count;
}

int main(void)
{
    char string[MAX] = {};
    char keywords[5][MAX] = {};
    // char keyword[MAX]={};
    int i;

    printf("Input 5 keywords:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%100s", keywords[i]);
    }
    // scanf("%100s",keyword);
    printf("Input a string:\n");
    scanf("%100s", string);
    for (i = 0; i < 5; i++)
    {
        printf("%s: %d\n", keywords[i], countKeyword(keywords[i], string));
    }
    // printf("%s: %d\n", keyword, countKeyword(keyword, string));
    system("pause");
    return 0;
}