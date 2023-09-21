#include "main.h"

/**
 * rev_string - reverses the string
 *
 * @s: string parm
 *
 * Return:nothing
*/

void rev_string(char *s)
{
	int k, v;
	char swp;

	for (k = 0; s[k] != '\0'; k++)
	{
		;
	}

	v = 0;

	while (v < k / 2)
	{
		swp = s[v];
		s[v] = s[k - 1 - v];
		s[k - 1 - v] = swp;
		v++;
	}

}
