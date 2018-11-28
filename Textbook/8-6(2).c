#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100

void addComma(char string[], char result[])
{
    int count = 0;
    int lenstring = strlen(string);
    /* no ',' before the top digit */
    int lenresult = (lenstring - 1) / 3 + lenstring;
    for (count = 0; (count < MAX) && (lenresult >= 0) && (lenstring >= 0);
                     count++, lenresult--, lenstring--)
    {
        /* add comma every 3 digits */
        if ((count > 0) && (count % 4 == 0))
        {
            result[lenresult] = ',';
            /* this digit wasn't from string so lenstring should not decrease */
            lenstring++;
        }
        else
            result[lenresult] = string[lenstring];
    }
}

int main(void)
{
    char input[MAX] = {};
    int lenresult = (MAX - 1) / 3 + MAX;
    char result[lenresult];
    printf("Input an integer(no more than 100 digits):");
    scanf("%100s", input);
    addComma(input, result);
    printf("Output:%s\n", result);

    system("pause");
    return 0;
}