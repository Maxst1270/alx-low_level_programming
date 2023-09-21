#include "main.h"

/**
 * print_rev - prints the string reversed
 *
 * @s:string pointer
 *
 * Return:nothing
*/

void print_rev(char *s)
{
	int rv = 0;

	while (s[rv])
		rv++;

	for (;; rv--)
	{
		_putchar(s[rv]);
	}
	_putchar('\n');
}
