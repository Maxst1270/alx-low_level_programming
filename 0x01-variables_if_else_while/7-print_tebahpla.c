#include <stdio.h>

/**
 *main - Entry point
 *
 * Description:prints the alphabet in lower case reversed
 *
 * Return:always 0
*/
int main(void)
{
	char al = 'z';

	while (al >= 'a')
	{
		putchar(al);
		al--;
	}
	putchar('\n');

	return (0);
}
