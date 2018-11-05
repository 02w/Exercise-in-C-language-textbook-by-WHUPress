#include <stdio.h>
#include <stdlib.h>

int Multi(int a, int b)
{
    int result = a * b;
    if (!a || result / b != a)
    {
        /* handle overflow */
        printf("Error: Overflow!\n");
    }
    else
    {
        return result;
    }
}

int main(void)
{
    printf("Input Pound: ");
    int pound, gram;
    scanf("%d", &pound);
    gram = Multi(pound, 454);
    printf("Gram: %d\n", gram);

    system("pause");
    return 0;
}