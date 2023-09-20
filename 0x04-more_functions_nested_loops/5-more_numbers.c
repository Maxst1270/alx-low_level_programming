#include "main.h"

/**
 * more_numbers - prints the numbers 10 times
 *
 * Return:returns 0
*/

void more_numbers(void)
{
	int k, v, ad;

	for (k = 1; k < 11; k++)
	{
		v = 0;

		while (v < 15)
		{
			ad = v;
			if (v > 9)
			{
				_putchar(1 + 48);
				ad = v % 10;
			}
			_putchar(ad + 48);
			v++;
		}
		_putchar('\n');
	}
}
