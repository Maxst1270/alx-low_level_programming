#include <stdio.h>

/**
 *main - Entry point
 *
 *Description:printing the first 50 Fibonacci numbers
 *
 *Return:returns 0
 */

int main(void)
{
	long int fb1 = 1, fb2 = 2;

	long int list = 3, fbn = fb1 + fb2;

	printf("%ld, ", fb1);
	printf("%ld, ", fb2);

	while (list <= 50)
	{
		if (list == 50)
		{
			printf("%ld", fbn);
		}

		else
		{
			printf("%ld, ", fbn);
		}

		fb1 = fb2;
		fb2 = fbn;

		fbn = fb1 + fb2;

		list++;
	}
	return (0);
}
