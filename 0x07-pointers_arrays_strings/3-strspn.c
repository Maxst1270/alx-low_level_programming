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
	unsigned int str, jpr;

	for (str = 0; s[str] != '\0'; str++)
	{

		for (jpr = 0; accept[jpr] != s[str]; jpr++)
		{
			if (accept[jpr] == '\0')
				return (str);
		}
	}
	return (str);
}
