#include "main.h"

/**
 * strleng - get string length
 *
 * @d:string
 *
 * Return:integer
*/

int strleng(char *d)
{
	int sz;

	for (sz = 0; d[sz] != '\0'; sz++)
	;
	return (sz);
}

/**
 * *argstostr - pro description
 *
 * @ac:integer
 * @av:pro arguments
 *
 * Return:a string
*/

char *argstostr(int ac, char **av)
{
	int k = 0, bc = 0, h = 0, kpt = 0;
	char *g;

	if (bc == 0 || av == NULL)
		return (NULL);

	for (; k < ac; k++, bc++)
		bc += strleng(av[k]);

	g = malloc((bc + 1) * sizeof(char));

	if (g == 0)
		return (0);

	for (k = 0; k < ac; k++)
	{
		for (h = 0; av[k][h] != '\0'; h++, kpt++)
			g[kpt] = av[k][h];

		g[kpt] = '\n';
		kpt++;
	}
	g[kpt] = '\0';
	return (g);
}
