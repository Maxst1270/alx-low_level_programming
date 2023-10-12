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

	if (argc > 4)
	{
		printf("Error1\n");
		exit(98);
	}

	op_func = get_op_func(argv[2]);

	if (!op_func)
	{
		printf("Error2\n");
		exit(99);
	}
	if (*argv[3] == '0' && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error3\n");
		exit(100);
	}

	b = atoi(argv[1]);
	m = atoi(argv[3]);

	printf("%d\n", op_func(b, m));
	return (0);

}

