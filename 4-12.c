#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int peachNum = 1;
    int i = 1;
    for (i = 1; i < 10; i++)
    {
        peachNum = (peachNum + 1) * 2;
    }
    printf("The number of peaches is %d.\n", peachNum);

    system("pause");
    return 0;
}