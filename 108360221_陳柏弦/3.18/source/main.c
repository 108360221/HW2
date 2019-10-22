#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float money, total;
	printf("Enter sales in dollars(-1 to end):");
	scanf_s("%f", &money);
	total = 200 + money * 1.09;
	printf("Salad is:  %.1f\n", total);
	system("pause");
	return 0;

}