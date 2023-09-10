#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:printing combo for two two digits
 *
 * Return:returns 0
*/

int main(void)
{
	int frscnt = 0, scndcnt;

	while (frscnt <= 99)
	{
		scndcnt = 0;

		while (scndcnt <= 99)
		{
			if (scndcnt != frscnt)
			{
				putchar((frscnt / 10) + 48);
				putchar((frscnt % 10) + 48);
				putchar(' ');
				putchar((scndcnt / 10) + 48);
				putchar((scndcnt % 10) + 48);

				if (frscnt != 98 || scndcnt != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			scndcnt++;
		}
		frscnt++;
	}
	putchar('\n');

	return (0);
}
