#include "main.h"

/**
 * more_numbers - prints the numbers 10 times
 *
 * Return:returns 0
*/

void more_numbers(void)
{
	int k, v = 0;

	for (k = 1; k < 11; k++)
	{
		while (v < 15)
		{
			_putchar(v + 48);
			v++;
		}
		_putchar('\n');
	}
	_putchar('\n');
}
