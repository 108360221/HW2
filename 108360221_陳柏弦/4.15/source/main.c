#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	double amount, principal = 5000.00, rate = 1.100, rate2;
	int year;

	printf("Year\tdeposit\n");

	amount = principal * rate;

	for (year = 1; year <= 15; year++)
	{
		printf("%d\t%.2f\n", year, amount);
		rate = rate + 0.005;
		amount = amount * rate;
	}

	system("pause");
	return 0;
}

//======================================================
//debug ±M¥Î
	//printf("Year\tdeposit\t\trate\trate2\n");
	//rate2 = (rate - 1) * 100;
	/*
	for (year=1;year<=15;year++)
	{
		if (year <= 6)
		{
			printf("%d\t%.2f\t\t%.3f\t%.2f\n", year, amount, rate, rate2);
			rate = rate + 0.005;
			amount = amount * rate;
			rate2 = (rate - 1) * 100;
		}
		else
		{
			printf("%d\t%.2f\t%.3f\t%.2f\n", year, amount, rate, rate2);
			rate = rate + 0.005;
			amount = amount * rate;
			rate2 = (rate - 1) * 100;
		}
	}
	*/
	//=================================================