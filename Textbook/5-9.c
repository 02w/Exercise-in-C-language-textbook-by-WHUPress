#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int flip(void)
{
    int result = rand() % 2;
    return result;
}

int main(void)
{
    int i;
    int countHead = 0, countTail = 0;
    time_t t;
    srand((unsigned)time(&t));
    for (i = 0; i < 100; i++)
    {
        if (flip() == 0)
        {
            printf("Head\n");
            countHead++;
        }
        else
        {
            printf("Tail\n");
            countTail++;
        }
    }
    printf("Head:%d , Tail:%d\n", countHead, countTail);

    system("pause");
    return 0;
}
