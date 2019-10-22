#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int hour;
	float money, pay;
	printf("Enter # of hours worked(-1 ot end): ");
	scanf_s("%d", &hour);
	printf("Enter hourly rate of worker($00.00): ");
	scanf_s("%f", &money);
	if (hour <= 40 && hour > 0)
	{
		pay = hour * money;
	}
	else if (hour > 40)
	{
		pay = hour * money * 1.5;
	}
	printf("Salad is $%.2f\n", pay);
	system("pause");
	return 0;
}