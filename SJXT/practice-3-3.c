#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int price, money;
    printf("Enter price: ");
    scanf("%d", &price);
    printf("Enter money: ");
    scanf("%d", &money);
    int change = money - price;
    printf("Change: %d\n", change);

    system("pause");
    return 0;
}
