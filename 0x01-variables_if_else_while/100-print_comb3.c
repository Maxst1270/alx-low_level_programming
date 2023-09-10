#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:printing a two digit combo
 *
 * Return:returns 0
*/

int main(void)
{

	int cnt1 = 0, cnt2;

	while (cnt1 <= 9)
	{
		cnt2 = 0;

		while (cnt2 <= 9)
		{
			if (cnt1 != cnt2 && cnt1 < cnt2)
			{
				putchar (cnt1 + 48);
				putchar (cnt2 + 48);

				if (cnt1 + cnt2 != 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
			cnt2++;
		}
		cnt1++;
	}
	putchar('\n');

	return (0);
}
