#include "3-calc.h"

/**
 * op_add - adds two integers
 *
 * @a:first integer
 * @b:second integer
 *
 * Return:returns integer
*/

int op_add(int a, int b)
{
	int z;

	z = a + b;
	return (z);
}

/**
 * op_sub - subtracts two integers
 *
 * @a:first int
 * @b:second int
 *
 * Return:returns int
*/

int op_sub(int a, int b)
{
	int x;

	x = a - b;
	return (x);
}

/**
 * op_mul - multiplies two ints
 *
 * @a:first int
 * @b:second int
 *
 * Return:returns int
*/

int op_mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}

/**
 * op_div - divides two ints
 *
 * @a:first int
 * @b:second int
 *
 * Return:returns int
*/

int op_div(int a, int b)
{
	int v;

	v = a / b;
	return (v);
}

/**
 * op_mod - gives the remaining of dividing two ints
 *
 * @a:first int
 * @b:second int
 *
 * Return:returns int
*/

int op_mod(int a, int b)
{
	int n;

	n = a % b;
	return (n);
}
