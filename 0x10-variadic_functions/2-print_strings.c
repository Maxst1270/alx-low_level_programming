#include "variadic_functions.h"

/**
 * print_strings - prints the strings passed
 *
 * @separator:strings separator
 * @n:number of args
 * @...:strings to be printed
 *
 * Return:returns void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int b = n;
	char *pr;
	va_list pl;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(pl, n);

	while (b--)
	{
		printf("%s%s", (pr = va_arg(pl, char *)) ? pr : "(nil)", b ? (separator ? separator : "") : "\n");
	}
	va_end(pl);
}
