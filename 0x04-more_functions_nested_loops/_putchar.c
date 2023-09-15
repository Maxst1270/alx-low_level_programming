#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints a charcter in the standard output
 *
 * @k: character to be printed
 *
 * Return: return 1 on success , returns -1 on fail
 */

int _putchar(char k)
{
	return (write(1, &k, 1));
}
