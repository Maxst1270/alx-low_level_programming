#include "main.h"

/**
 * _strlen_recursion - gets the string length
 *
 * @s:string que
 *
 * Return:returns the line leng
*/

int _strlen_recursion(char *s)
{
	int qu;

	if (*s != '\0')
	{
		qu += _strlen_recursion(s + 1);
	}
	return (qu);
}
