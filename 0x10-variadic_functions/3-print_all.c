#include "variadic_functions.h"

/**
 * format_char - formats character
 *
 * @separator:strings separat
 * @cp:pointer to args
 *
 * Return:void
*/

void format_char(char *separator, va_list cp)
{
	printf("%s%c", separator, va_arg(cp, int));
}

/**
 * format_int - formats integer
 *
 * @separator:strings separator
 * @cp:pointer to args
 *
 * Return:void
*/

void format_int(char *separator, va_list cp)
{
	printf("%s%d", separator, va_arg(cp, int));
}

/**
 * format_float - formats float
 *
 * @separator:strings separator
 * @cp:pointer to args
 *
 * Return:void
*/

void format_float(char *separator, va_list cp)
{
	printf("%s%f", separator, va_arg(cp, double));
}

/**
 * format_string - formats string
 *
 * @separator:strings separator
 * @cp:pointer to args
 *
 * Return:void
*/

void format_string(char *separator, va_list cp)
{
	char *pr = va_arg(cp, char *);

	switch ((int)(!pr))
	case 1:
		pr = "(nil)";

	printf("%s%s", separator, pr);
}

/**
 * print_all - prints any passed thing
 *
 * @format:format of string
 *
 * Return:void
*/

void print_all(const char * const format, ...)
{
	int t = 0, g;
	char *separator = "";
	va_list cp;
	sign_t signs[] = {
		{"c", format_char},
		{"i", format_int},
		{"f", format_float},
		{"s", format_string},
		{NULL, NULL}
	};

	va_start(cp, format);

	while (format && format[t])
	{
		g = 0;

		while (signs[g].sign)
		{
			if (format[t] == signs[g].sign[0])
			{
				signs[g].d(separator, cp);
				separator = ", ";
			}
			g++;
		}
		t++;
	}
	printf("\n");
	va_end(cp);
}
