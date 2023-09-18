#include "main.h"

/**
 *print_times_table - prints the time table n times
 *
 *@n: checks for int
*/


void print_times_table(int n)
{
	int en, dibs, cnt = 0;

	if (n <= 15 && n >= 0)
	{
		while (cnt <= n)
		{
			_putchar(48);

			for (dibs = 1; dibs <= n; dibs++)
			{
				_putchar(',');
				_putchar(' ');

				en = cnt * dibs;

				if (en <= 9)
					_putchar(' ');

				if (en <= 99)
					_putchar(' ');

				if (en >= 100)
				{
					_putchar((en / 100) + 48);
					_putchar((en / 10) % 10 + 48);
				}
				else if (en <= 99 && en >= 10)
					_putchar((en / 10) + 48);

				_putchar((en % 10) + 48);

			}
			_putchar('\n');
		cnt++;
		}
	}

}
