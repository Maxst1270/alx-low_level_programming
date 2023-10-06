#include "main.h"

/**
 * strleng - get string length
 *
 * @v: a string
 *
 * Return:length
*/

int strleng(char *v)
{
	int sz;

	for (sz = 0; v[sz]; sz++)
	;
	return (sz);
}

/**
 * *str_concat - concatenate two strings
 *
 * @s1:first string
 * @s2:2nd string
 *
 * Return:pointer
*/

char *str_concat(char *s1, char *s2)
{
	int sz1, sz2;
	char *g;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	sz1 = strlen(gs1);
	sz2 = strleng(s2);
	g = malloc(((sz1 + sz2) * sizeof(char)) + 1);

	if (g == NULL)
		return (NULL);

	for (i = 0; i <= sz1 + sz2; i++)
	{
		if (i < sz1)
			g[i] = s1[i];
		else
			g[i] = s2[i - sz2];
	}
	g[i] = '\0';

	return (g);
}
