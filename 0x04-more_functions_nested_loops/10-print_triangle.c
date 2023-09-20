#include "main.h"

/**
 * print_triangle - prints a triangle using simble
 *
 * @size: the size of the triangle
*/

void print_triangle(int size)
{
	int ln = 1, cl, link;

	if (size > 0)
	{
		while (ln <= size)
		{
			for (cl = 1; cl <= size; cl++)
			{
				link = ln + cl;

				if (link <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			ln++;
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
