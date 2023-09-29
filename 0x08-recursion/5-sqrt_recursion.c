#include "main.h"

/**
 * _sqrt_recursion -calcs the natural sqrt of number
 *
 * @n:numb given
 *
 * Return: sqrt ,or -1 otherwise
*/

int _sqrt_recursion(int n)
{
	return (sqr(n, 1));
}

/**
 * sqr - checks for squares of numb
 *
 * @n:number given
 * #sq:nat square root
 *
 * Return:returns -1,square root otherwise
*/

int sqr(int n, int sq)
{
	if (n == (sq *sq))
		return (sq);
	else if (n > (sq *sq))
		return (sqr(n, sq + 1));
	else
		return (-1);
}
