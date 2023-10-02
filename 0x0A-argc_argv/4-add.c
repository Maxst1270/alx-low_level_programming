#include <stdio.h>
#include <stdlib.h>

/**
 *main - Entry point
 *
 *@argc:number of arguments
 *@argv:array of arguments
 *
 *Return:retutns 0
*/

int main(int argc, char *argv[])
{
	int col = 0;
	char *k;

	while (--argc)
	{
		for (k = argv[argc]; *k; k++)
			if (*k < '0' || *k > '9')
				return (printf("error\n"), 1);
		col += atoi(argv[argc]);
	}
	printf("%d\n", col);
	return (0);
}
