#include "main.h"
/**
 * main - Entry point
 *
 * Description:prints numbers from 0 till 100 with a twist
 *
 * Return: returns 0
*/

int main(void)
{
	int nim;

	for (nim = 1; nim <= 100; nim++)
	{
		if (nim % 3 == 0)
			printf("Fizz ");
		else if (nim % 5 == 0)
			printf("Buzz ");

		if (nim % 3 == 0 && nim % 5 == 0)
			printf("FizzBuzz");

		printf("%d ", nim);
	}
	printf("\n");

	return (0);
}
