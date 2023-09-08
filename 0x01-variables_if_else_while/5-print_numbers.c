#include <stdio.h>

/**
 *main - Entry point
 *
 * Description:prints numbers less than ten
 *
 * Return:always 0
*/
int main(void)
{
	int c = 0;

	while (c < 10)
	{
		printf(c);
		c++;
	}

	printf("\n");

	return (0);
}
