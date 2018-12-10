#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

struct stu
{
    int num;
    char name[15];
    char sex;
    float score;
} boy[SIZE] = {
    {101, "Li ping", 'M', 45},
    {102, "Zhang ping", 'M', 45},
    {103, "He fang", 'F', 92.5},
    {104, "Cheng ling", 'F', 87},
    {105, "Wang ming", 'M', 58}};

int main(void)
{
    int i, c = 0;
    float ave, s = 0;

    for (i = 0; i < SIZE; i++)
    {
        s += boy[i].score;
        if (boy[i].score < 60)
            c += 1;
    }

    printf("s=%f\n", s);

    ave = s / SIZE;
    printf("average=%f\ncount=%d\n", ave, c);
    
    system("pause");
    return 0;
}
