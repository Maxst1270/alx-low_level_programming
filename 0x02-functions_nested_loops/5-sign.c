#include "main.h"

/**
 * print_sign - print weather the num is pos or neg
 *
 * @n:input check
 *
 * Return:returns 1 if pos ,-1 if neg ,and 0 if its zero
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	return (1);

	else if (n < 0)
		_putchar('-');
	return (-1);

	else
		_putchar(0 + '48');

	return (0);

}
