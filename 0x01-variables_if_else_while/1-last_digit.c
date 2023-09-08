#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main - Entry point
 *
 *Description:the last digit is greater than less than or equals zero
 *
 * Return:always 0
 */

int main(void)
{
	int n;
	double g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	g = n % 10;
	if (g > 5)
		printf("Last digit of %d is %g  and is greater than 5", n, g);
	else if (g == 0)
		printf("Last digit of %d is %g  and is 0", n, g);
		else if (g < 6 && g != 0)
		printf("Last digit of %d is %g  and is less than 6 and not 0", n, g);
	return (0);
}
