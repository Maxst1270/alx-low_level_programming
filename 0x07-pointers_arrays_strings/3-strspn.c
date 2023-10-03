#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 *
 * @s:a string
 * @accept:bytes of string
 *
 * Return:length
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int str;

	for (str = 0; s[str] != '\0'; str++)
	{
		unsigned int jpr = 0

		while (accept[jpr] != s[str])
		{
			if (accept[jpr] == '\0')
				return (str);
			jpr++;
		}
	}
	return (str);
}
