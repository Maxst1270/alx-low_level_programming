#include <stdio.h>

/**
 * main - Entry point
 *
 * @argc:number of arguments
 * @argv:array of arguments passed
 *
 * Return:returns 0
*/

int main(int argc, char *argv[])
{
	int x = 0;

	while (argc--)
	{
		printf("%s\n", argv[x]);
		x++;
	}
	return (0);
}
