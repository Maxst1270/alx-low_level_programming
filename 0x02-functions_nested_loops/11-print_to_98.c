#include <stdio.h>


/**
 *print_to_98 - counts from n to 98
 *
 *@n:beginning int
*/

void print_to_98(int n)
{
	int par;

	if (n > 98)
		for (par = n; par > 98; par--)
			printf(", %d", par);

	else
		for (par = n; par < 98; par++)
			printf(", %d", par);
	printf("98\n");

}
