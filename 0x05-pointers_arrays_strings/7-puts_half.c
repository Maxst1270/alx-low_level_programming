#include "main.h"

/**
 * puts_half - prints the other half of string
 *
 * @str:string par
*/

void puts_half(char *str)
{
	int b = 0;

	while (str[b] != '\0')
	{
		b++;
		;
	}

	b++;
	for (b /= 2; str[b] != '\0'; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}
