#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints dog info
 *
 * @d:dogs info to print
 *
 * Return:returns void
*/

void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
		{
			printf("Name - %s \n", d->name);
		}
		else
			printf("nill");

		if (d->age)
			printf("Age - %s \n", d->age);

		if (d->owner)
			printf("Owner - %s \n", d->owner);
		else
			printf("nill");
	}
}
