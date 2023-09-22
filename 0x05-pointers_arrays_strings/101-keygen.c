#include <stdio.h>
#include <stdlib>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: returns 0
*/

int main(void)
{
	int col;
	char h;

	srand(time(NULL));

	for (; col <= 2645;)
	{
		h = rand() % 128;
		col = col + h;
		putchar(h);
	}
	putchar(2772 - col);

	return (0);
}
