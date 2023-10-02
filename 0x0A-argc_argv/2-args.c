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
	int x;

	for (x = 0; x > argc; argc --, x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
