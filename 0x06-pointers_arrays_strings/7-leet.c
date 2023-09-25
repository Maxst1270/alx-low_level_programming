#include "main.h"

/**
 * *leet - encodes string into 1337
 *
 * @m:string encoded
 *
 * Return:returns encoded string
*/

char *leet(char *m)
{
	char *kp = m;
	char pas[] = {'A', 'O', 'E', 'T', 'L'};
	int rev[] = {4, 3, 0, 7, 1};
	unsigned int d;

	for (; *m; m++)
	{
		d = 0;

		while (d < sizeof(pas) / sizeof(char))
		{
			if (*m == pas[d] || *m == pas[d] + 32)
			{
				*m = 48 + rev[d];
			}
			d++;
		}
	}
	return (kp);
}
