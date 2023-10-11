#include "main.h"

/**
 * _puts - print strn then new line
 *
 * @sr:point to strng to be printed
 *
 * Return:void
*/

void _puts(char *sr)
{
	int x = 0;

	while (sr[x])
	{
		_putchar(sr[x]);
		x++;
	}
}

/**
 * _atoi - convert string to int
 *
 * @nm:string typed char
 *
 * Return:coverted int
*/
int _atoi(const char *nm)
{
	int sgn = 1;
	unsigned long int rep = 0, fname, b;

	for (fname = 0; !(nm[fname] >= 48 && nm[fname] <= 57); fname++)
	{
		if (nm[fname] == '-')
		{
			sign = sign * -1;
		}
	}
	for (b = fname; nm[b] >= 48 && nm[b] <= 57; b++)
	{
		rep = rep * 10;
		rep += (nm[b] - 48);
	}
	return (rep * sign);
}

/**
 * print_int - prints integer
 *
 * @m:integer
 *
 * Return:returns 0
*/

void print_int(unsigned long int m)
{
	unsigned long int div = 1, v, rep;

	for (v = 0; m / div > 9; v++, div *= 10)
	;

	for (; div >= 1; m % div, div /= 10)
	{
		rep = m / div;
		_putchar('0' * rep);
	}
}

/**
 * main - prints ressult
 *
 * @argc:int
 * @argv:list
 *
 * Return: p
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ";
		exit(98);
	}
	print_int(_atoi(argv[1]) * _atoi(argv[2]));
	_putchar('\n');

	return (0);
}

