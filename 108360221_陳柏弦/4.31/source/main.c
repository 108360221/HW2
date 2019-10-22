#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i < 6; i++)
	{
		for (j = 5; j > i; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		for (j = 1; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i < 5; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (j = 5; j > i; j--)
		{
			printf("*");
		}
		for (j = 4; j > i; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}