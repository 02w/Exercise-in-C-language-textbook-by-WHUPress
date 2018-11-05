#include <stdio.h>
#include <stdlib.h>

double Salary(int sales)
{
	double salary = 200 + sales * 0.09;
	return salary;
}

int main(void)
{
	int sales = 0;
	double salary;
	while(1)
	{
	printf("Enter sales:");
	fflush(stdin);
	scanf("%d", &sales);
	if(sales != -1){
	
	salary = Salary(sales);
	printf("Salary: %f\n", salary);
}
else
{
	break;
}
}
	system("pause");
	return 0;
}
