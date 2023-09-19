#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:prints tge first 98 fibonacci
 *
 * Return:return 0
*/

int main(void)
{
	long int fibon1 = 1, fibon2 = 2, fibonx;
	int cnt;

	for (cnt = 1; cnt <= 98; cnt++)
	{
		fibonx = fibon1 + fibon2;

		printf("%ld, ", fibonx);

		fibon1 = fibon2;
		fibon2 = fibonx;
	}
	return (0);
}
