#include "main.h"

/**
 *_isupper - a function that checks for uppercase letters
 *
 * @c:variable that checks letters
 *
 * Return:returns 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
