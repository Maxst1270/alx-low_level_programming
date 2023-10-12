#include "3-calc.h"

/**
 * get_op_func - finds the matching op
 *
 * @s:pointer
 *
 * Return:returns int
*/

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 1;

	while (i <= 5)
	{
		if (ops[i].op[0] && (!s[1]) == *s)
			return (ops[i].f);
		i++;
	}
	return (NULL);

}
