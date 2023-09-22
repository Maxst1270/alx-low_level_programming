#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:fibonacci even numbers sum
 *
 * Return:returns 0
*/

int main(void)
{
	unsigned long fb1 = 0, fb2 = 1, fbn;
	float sum;

	while (4)
	{
		fbn = fb1 + fb2;

		if (fbn > 4000000)
			break;

		if ((fbn % 2) == 0)
			sum = sum + fbn;

		fb1 = fb2;
		fb2 = fbn;
	}
	printf("%.0f\n", sum);

	return (0);
}

