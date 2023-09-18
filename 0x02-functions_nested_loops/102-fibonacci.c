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
	long int fb1 = 0, fb2 = 1;

	long int list, fbn = fb1 + fb2;

	printf("%d, ", fb1);
	printf("%d, ", fb2);

	while (list <= 50)
	{
		if (list == 50)
		{
			printf("%d\n ", fbn);
		}

		else
		{
			printf("%d, ", fbn);
		}

		fb1 = fb2;
		fb2 = fbn;

		fbn = fb1 + fb2;

		list++;
	}
	return (0);
}
