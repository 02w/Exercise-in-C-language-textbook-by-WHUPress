#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Input an integer:\n");
	int a;
	if (scanf("%d", &a) == 1)
	{
		while (a / 10 != 0)
		{
			int b = a % 10;
			printf("%d", b);
			a = a / 10;
		}
		printf("%d\n", a);
	}
	else
	{
		printf("Input Error!\n");
	}

	system("pause");
	return 0;
}
