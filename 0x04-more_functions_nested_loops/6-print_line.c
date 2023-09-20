#include "main.h"

/**
 * print_line - prints line to n times
 *
 * @n:times - will be printed
*/

void print_line(int n)
{
	int lp;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		lp = 1;

		while (lp <= n)
		{
			_putchar('-');
			lp++;
		}
		_putchar('\n');
	}

}
