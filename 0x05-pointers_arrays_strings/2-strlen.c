#include "main.h"

/**
 *_strlen - counts the characters in a string
 *
 * @s:the string par
 *
 * Return: returns the char count
*/

int _strlen(char *s)
{
	int lnc = 0;

	while (*s != '\0')
		lnc++;
	s++;

	return (lnc);
}
