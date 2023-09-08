#include <stdio.h>

/**
 *main - Entry point
 *
 * Description:prints numbers less than ten in ascii
 *
 * Return:always 0
*/
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(c + '0');
			c++;
	}
	putchar('\n');

	return (0);

}
