#include "main.h"

/**
 * *_strchr - locate char in string
 *
 * @s:param
 * @c:cobst
 *
 * Return:point to s
*/

char *_strchr(char *s, char c)
{
	int str = 0;

	while (s[str] >= '\0')
	{
		if (s[str] == c)
		{
			return (s + str);
		}
		str++;
	}
	return ('\0');
}
