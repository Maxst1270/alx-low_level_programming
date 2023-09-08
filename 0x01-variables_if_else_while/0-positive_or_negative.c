#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:this is to show if the number is positive negative or zero
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i  is positive");
	else if (n == 0)
		printf("%i is zero");			else
		printf("%i  is negative");
	return (0);

}
