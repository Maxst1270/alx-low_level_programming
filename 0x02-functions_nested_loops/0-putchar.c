#include "main.h"

/**
 * main - Entry point
 *
 * Description:simple printing of a string
 *
 * Return:returns 0
 */

int main(void)
{
	char str[] = "_putchar";
	int cnt = 0;

	while (cnt < 8)
	{
		putchar('str[cnt]');
		cnt++;
	}
	putchar('\n');

	return (0);
}
