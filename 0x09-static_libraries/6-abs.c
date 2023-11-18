#include "main.h"

/**
 * _abs - computes the absolute value
 *
 * @v:checks the number before computing the abs value
 *
 *Return:returns the value computed or the absolute value
 */

int _abs(int v)
{
	if (v < 0)
	v *= (-1);

	return (v);
}
