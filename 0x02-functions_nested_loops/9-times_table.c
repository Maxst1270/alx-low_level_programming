#include "main.h"

/**
 * times_table - prints the times table 9
*/

void times_table(void)
{
	int j, v, p;

	for (j = 0; j <= 9; j++)
	{
		_putchar(48);

		for (v = 1; v <= 9; v++)
		{
			_putchar(',');
			_putchar(' ');

			p = j * v;

			if (p <= 9)
				_putchar(' ');

			else
				_putchar((p / 10) + 48);

			_putchar((p % 10) + 48);
		}
			_puthar('\n');

	}

}
