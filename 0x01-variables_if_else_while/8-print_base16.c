#include <stdio.h>

/**
 *main - Entry point
 *
 * Description:prints base 16 numbers
 *
 * Return:always 0
*/

int main(void)
{
	int as = 48;

	while (as < 103)
	{
		putchar(as);

		if (as == 57)
		{
			as += 39;
		}

		as++;
	}
	putchar('\n');

	return (0);
}
