#include <unistd.h>

/**
 * main - Entry point
 *
 * Description:printing a one liner function
 *
 * Return:returns 1 unsuccessful
*/

int main(void)
{
	char pnt[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, pnt, 59);

	return (1);
}

