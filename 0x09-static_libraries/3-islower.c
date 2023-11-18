#include "main.h"

/**
 * _islower - a function to count the lower case letters in the stdout
 *
 * @c: check the input of the function
 *
 * Return:returns 1 if the input is lowercase,0 otherwise
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);

	return (0);
}
