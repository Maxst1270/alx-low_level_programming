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
	char alLo = 'a';
	char alUp = 'A';

	while (alLo <= 'z')
	{
		putchar(alLo);
		alLo++;
	}

	while (alUp <= 'Z')
	{
		putchar(alUp);
		alUp++;
	}
	putchar('\n');

	return (0);
}
