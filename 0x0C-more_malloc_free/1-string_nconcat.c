#include "main.h"

/**
 **string_nconcat - concats two strings
 *
 *@s1:point to first string
 *@s2:point to second string
 *@n:interger
 *
 *Return:returns pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int x, w, s1leng, s2leng;
	char *v;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1leng = 0; s1[s1leng] != '\0'; s1leng++)
	;

	for (s2leng = 0; s2[s2leng] != '\0'; s2leng++)
	;

	if (n >= s2leng)
		n = s2leng;

	v = malloc((s1leng + 1) + n);

	if (v == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		v[x] = s1[x];

	for (w = 0; w <= n; w++)
	{
		v[x] = s2[w];
		x++;
	}
	v[x] = '\0';

	return (v);
}
