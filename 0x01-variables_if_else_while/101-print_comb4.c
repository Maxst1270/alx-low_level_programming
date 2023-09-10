#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:print three digits combo
 *
 * Return:return 0
*/

int main(void)
{
	int coun1 = 0;
	int coun2, coun3;

	while (coun1 <= 9)
	{
		coun2 = 0;
		while (coun2 <= 9)
		{
			coun3 = 0;

			while (coun3 <= 9)
			{
			if (coun1 != coun2 && coun1 < coun2 && coun2 != coun3 && coun2 < coun3)
			{
				putchar(coun1 + 48);
				putchar(coun2 + 48);
				putchar(coun3 + 48);

				if (coun1 + coun2 + coun3 != 24)
				{
					putchar(',');
					putchar(' ');
				}
			}
			coun3++;
		}
		coun2++;
		}
	coun1++;
	}
	putchar('\n');

	return (0);
}
