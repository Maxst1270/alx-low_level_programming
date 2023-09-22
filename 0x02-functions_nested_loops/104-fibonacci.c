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
	unsigned long int fin1 = 1, fin2 = 2, finx = 100000000, col, fib1o = 0,fib2o = 0, colo = 0;
	int cnt =1, stat;

	while (cnt <= 98)
	{
		if (fib1o > 0)
			printf("%lu", fib1o);
		stat = numLength(finx) - 1 - numLength(fin1);

		for (; fib1o > 0 && stat > 0;stat--)
		{
			printf("%d", 0);
		}
		printf("%lu", fin1);

		col = (fin1 + fin2) % finx;
		colo = fib1o + fib2o + (fin1 + fin2) / finx;
		fin1 = fin2;
		fib1o = fib2o;
		fin2 = col;
		fib2o = colo;

		if (cnt != 98)
			printf(", ");
		else
			printf("\n");
		cnt++;
	}
	return (0);
}
