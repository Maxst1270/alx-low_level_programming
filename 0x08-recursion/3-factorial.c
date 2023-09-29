#include "main.h"

/**
 * factorial - calcs the factorial
 *
 * @n:number given
 *
 * Return: returns -1 if failed, 1 if it equals zero
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
