#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @k:checks the input
 *
 * Return: returns the last digit found
 */

int print_last_digit(int k)
{
	int ld;

	if (k < 0)
		ld = (-1) * (k % 10);
	else
		ld = k % 10;

	_putchar(ld + '0');

	return (ld);

}
