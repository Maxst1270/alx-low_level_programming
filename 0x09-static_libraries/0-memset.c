#include "main.h"

/**
 * *_memset - fill memory
 *
 * @s:param
 * @b:const
 * @n:max bytes
 *
 * Return:param
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int str = 0;

	while (n > 0)
	{
		s[str] = b;
		str++;
		n--;
	}
	return (s);
}
