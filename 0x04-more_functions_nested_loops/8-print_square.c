#include "main.h"

/**
 * print_square - prints a square of #
 *
 * @size: size of the square
*/

void print_square(int size)
{
	int ln, rw;

	if (size > 0)
	{
		ln = 1;

		while (ln <= size)
		{
			for (rw = 1; rw <= size; rw++)
			{
				_putchar(35);
			}
			_putchar('\n');
			ln++;
		}
	}
	else if (size <= 0)
		_putchar('\n');

}
