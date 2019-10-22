#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float M_m = 20.00, HW_m, CW_m, PW_m, b_m, sale;
	//manager,hourly worker,commission worker,pieceworker,basic money
	int class, hour;

	printf("Enter class number : ");
	scanf_s("%d", &class);
	switch (class)
	{
	case 1://M_m
		printf("Manager's weekly pay is $%.2f\n", M_m);
		break;
	case 2://HW_m
		printf("Enter working hours :");
		scanf_s("%d", &hour);
		printf("Enter hourly rate of the worker($00.00) :");
		scanf_s("%f", &b_m);
		if (hour > 40)
		{
			HW_m = b_m * (1.5 * hour - 20);
		}
		else if (hour <= 40 && hour > 0)
		{
			HW_m = b_m * hour;
		}
		printf("Hourly worker weekly pay is $%.2f\n", HW_m);
		break;
	case 3://CW_m
		printf("Enter weekly sales : ");
		scanf_s("%f", &sale);
		CW_m = 250 + sale * 0.057;
		printf("Commission worker weekly pay is $%.2f\n", CW_m);
		break;
	case 4://PW_m
		printf("Enter this item's dividend : ");
		scanf_s("%f", &PW_m);
		printf("Pieceworker weekly pay is $%.2f\n", PW_m);
		break;
	}

	system("pause");
	return 0;
}