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
	int fb1 = 0, fb2 = 1;

	int list, fbn = fb1 + fb2;

	printf("%d, ", fb1);
	printf("%d, ", fb2);

	for (; list <= 50; list++)
	{
		if (list < 50)
			printf("%d, ", fbn);

		else if (list == 50)
			printf("%d \n", fbn);

		fb1 = fb2;
		fb2 = fbn;

		fbn = fb1 + fb2;

	}
	return (0);
}
