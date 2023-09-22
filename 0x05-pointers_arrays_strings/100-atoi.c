#include "main.h"

/**
 * _atoi - convert string to int
 *
 * @s:string par
 *
 * Return:converted ing
*/

int _atoi(char *s)
{
	unsigned int que;
	int flag = 1;

	do {
		if (*s == '-')
			flag *= -1;
		else if (*s >= '0' && *s <= '9')
			que = (que * 10) + (*s - '0');
		else if (que > 0)
			break;
	} while (*s++);

	return (que * flag);
}
