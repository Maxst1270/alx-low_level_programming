#include <stdio.h>
#include "main.h"

/**
 *print_to_98 - counts from n to 98
 *
 *@n:beginning int
*/

void print_to_98(int n)
{
	int par = n;

	if (n > 98)
		while (par > 98)
		{
			printf("%d", par);
			par--;
		}
	else
		while (n < 98)
		{
			printf("%d ", par);
		par++;
		}

}
