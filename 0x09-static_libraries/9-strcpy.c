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
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
