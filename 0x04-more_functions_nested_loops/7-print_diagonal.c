#include "main.h"

/**
 * print_diagonal - prints aline diagonally
 *
 * @n:number of lines printed
 *                                                       * Return: returns 0
*/

void print_diagonal(int n)
{
	int pat, ln;

	if (n > 0)
	{
		for (ln = 1; ln <= n; ln++)
		{
			pat = 0;

			while (pat < n)
			{
				_putchar(' ');
				pat++;
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else if (n <= 0)
		_putchar('\n');

}
