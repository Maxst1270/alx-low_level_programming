#include "main.h"

/**
 * print_most_numbers - prints number except 2, 4
 *
 * Return: returns 0
*/

void print_most_numbers(void)
{
	int v = 0;

	while (v < 10)
	{
		if (v == 2 || v == 4)
			v++;
		_putchar(v + 48);

		v++;
	}
	_putchar('\n');
}
