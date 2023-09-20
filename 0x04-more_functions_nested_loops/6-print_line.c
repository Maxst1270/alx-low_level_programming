#include "main.h"

/**
 * print_line - prints line to n times
 *
 * Return:returns 0
*/

void print_line(int n)
{
	int lp;

	if (n > 0)
	{
		lp = 0;

		while (lp <= n)
		{
			_putchar('-');
			lp++;
		}
		_putchar('\n');
	}
	else
		_putchar('\n');

}
