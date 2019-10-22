#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int day;
	float loan, rate, charge;

	printf("Enter loan principal(-1 to end): ");
	scanf_s("%f", &loan);
	printf("Enter interest rate: ");
	scanf_s("%f", &rate);
	printf("Enter term of the loan in days: ");
	scanf_s("%d", &day);
	charge = loan * rate * day / 365;
	printf("The interest charge is $%.2f\n", charge);


	system("pause");
	return 0;
}