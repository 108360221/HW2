#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
	unsigned int side1, side2;
	double x, y;
	float ht;

	printf("side1\tside2\thypotenuse\n");

	for (side1 = 1; side1 <= 500; side1++)
	{
		for (side2 = 1; side2 <= 500; side2++)
		{
			x = pow(side1, 2);
			y = pow(side2, 2);

			ht = pow(x + y, 0.5);
			if (ht > 500)
			{
				break;
			}
			else
			{
				if (ht - int(ht) == 0)
				{
					printf("%d\t%d\t%3.0f\n", side1, side2, ht);
				}
			}
		}
	}
	system("pause");
	return 0;
}