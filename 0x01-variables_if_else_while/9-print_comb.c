#include <stdio.h>

/**
 *main - Entry point
 *
 * Description:prints combo of single digits
 *
 * Return:always 0
*/
int main(void)
{
	int cnt;

	for (cnt = 0; cnt < 10; cnt++)
	{
		putchar(cnt + 48);

		if (cnt < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
