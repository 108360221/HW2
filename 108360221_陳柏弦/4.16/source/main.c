#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	//=============================================
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	//=============================================
	printf("(B)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 9; j > i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	//=============================================
	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 9; j > i; j--)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	//=============================================
	printf("(D)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 9; j > i; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	//=============================================
	system("pause");
	return 0;
}