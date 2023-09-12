#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet in lower cas
 */

void print_alphabet(void)
{
	char lp = 'a';

	while (lp <= 'z')
	{	
	_putchar(lp);
	lp++;
	}
	_putchar('\n');
}
