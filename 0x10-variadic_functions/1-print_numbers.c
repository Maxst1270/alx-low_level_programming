#include "variadic_functions.h"

/**
 * print_numbers - prints number in form
 *
 * @separator: string separ
 * @n:number of arguments
 * @...:nums to print
 *
 * Return:returns void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int v = n;
	va_list pl;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(pl, n);

	while (v--)
	{
		printf("%d%s", va_arg(pl, int), v ? (separator ? separator : "") : "\n");
	}
	va_end(pl);

}
