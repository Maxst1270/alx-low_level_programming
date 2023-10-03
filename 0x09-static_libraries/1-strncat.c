#include "main.h"

/**
 * *_strncat - concatenates two strings
 *
 * @dest:second string
 * @src:first string
 * @n:counter
 *
 * Return:returns dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int v = 0, x;

	while (dest[v])
		v++;

	for (x = 0; x < n && src[x] != '\0'; x++)
		dest[v + x] = src[x];

	dest[v + x] = '\0';

	return (dest);
}
