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
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	putchar("\n");
	return (0);
}
