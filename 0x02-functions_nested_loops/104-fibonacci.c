#include "main.h"
/**
 * numLength - gives string length
 *
 * @bit:number of op
 *
 * Return:dig number
*/

int numLength(int bit)
{
	int tl = 0;

	if (!bit)
		return (1);
	while (bit)
	{
		bit = bit / 10;
		tl = tl + 1;
	}

	return (tl);
}

/**
 * main - Entry point
 *
 * Description:prints tge first 98 fibonacci
 *
 * Return:return 0
*/

int main(void)
{
	unsigned long b1 = 1, b2 = 2, bx = 100000000, cl, b1o = 0, b2o = 0, clo = 0;
	int cnt = 1, stat;

	while (cnt <= 98)
	{
		if (b1o > 0)
			printf("%lu", b1o);
		stat = numLength(bx) - 1 - numLength(b1);

		for (; b1o > 0 && stat > 0; stat--)
		{
			printf("%d", 0);
		}

		printf("%lu", b1);

		cl = (b1 + b2) % bx;
		clo = b1o + b2o + (b1 + b2) / bx;
		b1 = b2;
		b1o = b2o;
		b2 = cl;
		b2o = clo;

		if (cnt != 98)
			printf(", ");
		else
			printf("\n");
		cnt++;
	}
	return (0);
}
