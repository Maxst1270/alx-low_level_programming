#include "3-calc.h"

/**
 * main - checks code
 *
 * @argc:arguments number
 * @argv:the arguments vector
 *
 * Return:returns int
*/

int main(int argc, char **argv)
{
	int (*op_func)(int, int), b, m;

	op_func = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (!op_func)
	{
		printf("Error\n");
		exit(99);
	}
	if (!b && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	b = atoi(argv[1]);
	m = atoi(argv[3]);

	printf("%d\n", op_func(b, m));
	return (0);

}

