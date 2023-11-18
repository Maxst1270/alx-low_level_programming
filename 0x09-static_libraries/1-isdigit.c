#include"main.h"

/**
 * _isdigit - checks for digit in given span
 *
 * @c: checking character
 *
 * Return:returns 1 if uppercase, 0 otherwise
*/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
