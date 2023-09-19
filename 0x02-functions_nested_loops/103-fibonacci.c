#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:print the sum of fibonacci numbers
 * over 4 million
 *
 * Return:return 0
*/

int main(void)
{
	long int fb1 = 1, fb2 = 2, fbn, sum = 2, check;

	check = 4000000;

	while (fbn <= check)
	{
		printf("%ld, ", sum);

		fbn = fb1 + fb2;

		if (fbn % 2 == 0)
			sum = sum + fbn;

		fb1 = fb2;
		fb2 = fbn;
	}
	printf("\n");

	return (0);
}
