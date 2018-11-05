#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char i, j, k;
    printf("List(The case which meets the restriction is underlined):\n");

    for (i = 'X'; i <= 'Z'; i++)
    {
        for (j = 'X'; j <= 'Z'; j++)
        {
            if (i != j)
            {
                for (k = 'X'; k <= 'Z'; k++)
                {

                    if (i != k && j != k)
                    {
                        printf("\nA--%c\tB--%c\tC--%c\n\n", i, j, k);
                        /* check for the restrictions */
                        if (i != 'X' && k != 'X' && k != 'Z')
                            printf("----------------------");
                    }
                }
            }
        }
    }

    system("pause");
    return 0;
}