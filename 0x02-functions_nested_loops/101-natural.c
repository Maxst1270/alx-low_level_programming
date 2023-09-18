#include "main.h"

/**
 * sum - Entry point
 *
 *Description:calculates the sum of every multiple of 3 or 5 under 1024
 *
 * Return: returns  0
*/

int sum(void)
{
	int sum, cnt = 0;

	while (cnt < 1024)
	{
		if ((cnt % 3 == 0) || (cnt % 5 == 0))
			sum += cnt;
		cnt++;
	}
	printf("%d\n", sum);

	return (0);

}
