#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc:number of arguments
 * @argv:array of arguments
 *
 * Return:returns 0
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int k, lescent = 0, cash = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (k = 0; k < 5; k++)
		{
			if (cash >= cents[k])
			{
				lescent += cash / cents[k];
				cash = cash % cents[k];
				if (cash % cents[k] == 0)
				{
					break;
				}
			}
		}
		printd("%d\n", lescent);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
