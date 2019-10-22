#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int L, W, i, j;//length,width

	printf("Enter length and width: ");
	scanf_s("%d%d", &L, &W);

	for (i = 0; i < W; i++)
	{
		if (i == 0 || i == (W - 1))
		{
			for (j = 0; j <= L; j++)
			{
				printf("*");
			}
		}
		else
		{
			for (j = 0; j <= L; j++)
			{
				if (j == 0 || j == L)
				{
					printf("*");
				}
				else
				{
					printf(" ");
				}
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}