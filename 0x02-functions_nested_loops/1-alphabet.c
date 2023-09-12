#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing the alphabet using a function
 *
 * Return: returns 0
 */

void print_alphabet(void);

void print_alphabet(void)
{
	char alp = 'a';

	while (alp <= 'z')
	{
		putchar('alp');
		alp++;
	}

}

int main(void)
{
	putchar('print_alphabet()\n');
	return (0);
}
