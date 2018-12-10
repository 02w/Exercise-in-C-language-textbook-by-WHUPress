#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct stu
{
    int num;
    char name[15];
    char sex;
    float score;
};

void readstu(struct stu boy[])
{

    int i;
    for (i = 0; i < SIZE; i++)
    {
        printf("Input student NO.%d's data:\n",i);
        printf("ID:");
        fflush(stdin);
        scanf("%d", &boy[i].num);
        printf("name:");
        fflush(stdin);
        scanf("%s", boy[i].name);
        printf("sex:");
        fflush(stdin);
        scanf("%c", &boy[i].sex);
        printf("score:");
        fflush(stdin);
        scanf("%f", &boy[i].score);
    }

}

float average(struct stu boy[])
{
    int i;
    int c = 0;
    float ave, s = 0;

    for (i = 0; i < SIZE; i++)
    {
        s += boy[i].score;
    }

    printf("s=%f\n", s);

    ave = s / SIZE;
    return ave;
}

int count(struct stu boy[])
{
    int i, c = 0;
    for (i = 0; i < SIZE; i++)
    {
        if (boy[i].score < 60)
            c += 1;
    }
    return c;
}

int main(void)
{
    int c;
    float ave;
    struct stu boy[SIZE];
    readstu(boy);
    ave = average(boy);
    c = count(boy);
    printf("average=%f\ncount=%d\n", ave, c);

    system("pause");
    return 0;
}
