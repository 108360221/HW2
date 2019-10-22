#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int a, b, c, d, e, nb;//a帳號,b月初餘額,c預付款總額,d所有貸款,e信用額度
	printf("Enter account number(-1 to end):");
	scanf_s("%d", &a);
	printf("Enter beginning balance:");
	scanf_s("%d", &b);
	printf("Enter total charges:");
	scanf_s("%d", &c);
	printf("Enter total credits:");
	scanf_s("%d", &d);
	printf("Enter credit limit:");
	scanf_s("%d", &e);
	nb = b + c - d;
	if (nb > e)
	{
		printf("Account:\t%d\nCredit limit:\t%d\nBalance:\t%d\nCredit Limit Exceeded.\n", a, e, nb);
	}
	system("pause");
	return 0;
}