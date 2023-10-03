#include "main.h"

/**
 * *_strcat - concatenates two strings
 *
 * @dest:first string
 * @src:second string
 *
 * Return:returns dest
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, is;

	while (dest[i])
		i++;

	for (is = 0; src[is]; is++)
		dest[i++] = src[is];

	return (dest);
}
