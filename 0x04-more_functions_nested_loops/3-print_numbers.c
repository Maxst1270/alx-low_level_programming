#include "main.h"

/**
 * print_numbers - prints 10 number
*/

void print_numbers(void)
{
	int k = 0;

	while (k < 10)
	{
		_putchar(k + 48);
		k++;
	}
	_putchar('\n');
}
