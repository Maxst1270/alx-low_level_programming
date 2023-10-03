#include "main.h"

/**
 * _abs - computes the absolute value
 *
 * @n:checks the number before computing the abs value
 *
 *Return:returns the value computed or the absolute value
 */

int _abs(int n)
{
	if (n < 0)
	n *= (-1);

	return (n);
}
