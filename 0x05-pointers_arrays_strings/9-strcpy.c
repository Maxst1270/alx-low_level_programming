#include "main.h"

/**
 * *_strcpy - copy the pointed string
 *
 * @dest:char string
 * @src:char string
 *
 * Return:returns pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = -1; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}
