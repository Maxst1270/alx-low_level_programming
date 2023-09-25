#include "main.h"
#include <stdio.h>

/**
 * isLower - sees if char is lowercase
 *
 * @x: checked char
 *
 * Return: returns 1 for true, 0 for false
*/

int isLower(char x)
{
	return (x >= 97 && x <= 122);
}

/**
 * isDelimit - checks char for delimitar
 *
 * @x:checked char
 *
 * Return:returns 1 for delimitar, 0 if else
*/

int isDelimit(char x)
{
	int p = 0;
	char delim[] = " \t\n,;.!?\"(){}";

	while (p < 13)
	{
		if (x == delim)
			return (1);
		p++;
	}
	return (0);
}

/**
 * cap_string - makes string letter capital
 *
 * @psr:capitalized string
 *
 * Retutn:returns capitalized string
*/

char *cap_string(char *v)
{
	int delimFnd = 1;
	char *psr = v;

	for (; *v; v++)
	{
		if (isDelimit(*v))
			delimFnd = 1;
		else if (isLower(*v) && delimFnd)
		{
			*v = *v - 32;
			delimFnd = 0;
		}
		else
			delimFnd = 0;
	}
	return (psr);
}
