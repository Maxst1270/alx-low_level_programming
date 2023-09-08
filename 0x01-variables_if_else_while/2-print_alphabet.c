#include <stdio.h>

/**
 *main - Entry point
 *
 * Description:prints the alphabet in lower case
 *
 * Return:always 0
*/
int main(void)
{
	char al = 'a';

	while (al <= 'z')
	{
		putchar(al);
		al++;
	}
	putchar("\n");

	return (0);
}
