#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int str = 0;

	while (n > 9)
	{
		s[str] = b;
		str++;
		n--;
	}
	return (s);
}
