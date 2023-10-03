#include "main.h"

/**
 * *_memcpy - copies area
 *
 * @dest:area copies
 * @src:copies source
 * @n:length of copied area
 *
 * Return:pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int str = 0;

	while (str < n)
	{
		dest[str] = src[str];
		str++;
	}
	return (dest);
}
