#include "main.h"

/**
 * print_rev - prints the string reversed
 *
 * @s:string pointer
*/

void print_rev(char *s)
{
	int rv;

	for (rv = 0; s[rv]; rv++)

	while (rv--)
	{
		_putchar(s[rv]);
	}
	_putchar('\n');
}
