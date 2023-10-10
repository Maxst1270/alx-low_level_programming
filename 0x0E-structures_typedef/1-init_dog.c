#include "dog.h"

/**
 * init_dog - inits new dog
 *
 * @d:new dog
 * @name:dogs name
 * @age:dogs age
 * @owner:dogs owner
 *
 * Return:returns void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->age = age;
		d->owner = owner;
		d->name = name;
	}
}
