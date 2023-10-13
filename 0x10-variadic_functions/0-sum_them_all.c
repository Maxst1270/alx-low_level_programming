#include "variadic_functions.h"

/**
 * sum_them_all - sums all passed arguments
 *
 * @n:number of arguments passed
 * @...:numbers passed to sum
 *
 * Return:returns the sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int k, v = n;
	va_list kc;

	if (n == 0)
		return (0);

	va_start(kc, n);

	while (v--)
	{
		k = k + va_arg(kc, int);
	}
	va_end(kc);

	return (k);
}
