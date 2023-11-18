#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc:number of arguments
 * @argv:array of arguments
 *
 * Return:returns 0 if succeded, esle 1
*/

int main(int argc, char *argv[])
{
	int col;

	if (argc == 3)
	{
		col = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", col);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
