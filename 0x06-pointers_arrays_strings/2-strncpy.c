#include "main.h"

/**
 * *_strncpy - copys a string
 *
 * @dest:copied string
 * @src:string copied from
 * @n:string par
 *
 * Return:returns copied string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{	
		dest[x] = src[x];
		x++;
	}

	for (; x < n; x++)
		dest[x] = '\0';

	return (dest);
}
