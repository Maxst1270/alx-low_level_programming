#include "main.h"

/**
 * _strcmp - compares strings
 *
 * @s1:first string
 * @s2:second string
 *
 * Return:returns result
*/

int _strcmp(char *s1, char *s2)
{
	int twn = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			twn = ((int)*s1 - 48) - ((int)*s2 - 48);
			break;
		}
		s1++;
		s2++;
	}

	return (twn);
}
