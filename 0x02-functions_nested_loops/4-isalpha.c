#include "main.h"

/**
 * _isalpha - checks for lowercase or uppercase letters
 *
 * @c: checks the input
 *
 * Return:returns1 if it is aletter ,0 if otherwise
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
		return (1);

	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
