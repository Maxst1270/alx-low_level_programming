#include "main.h"

/**
 * _puts - prints a string to stdout
 *
 * @s:the string param
 * Return:no return
*/

void _puts(char *s)
{
	for (; *s != '\0'; s++)
		_putchar(*s + 0);
	_putchar('\n');
}
