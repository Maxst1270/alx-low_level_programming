#include <stdlib.h>
#include "dog.h"

/**
 * _strleng - gets string length
 *
 * @sr:string to get length of
 *
 * Return:length of string
*/

int _strleng(char *sr)
{
	int len = 0;

	while (*sr++)
		len++;

	return (len);
}

/**
 * _srcpy - copys string
 *
 * @des:place of copied string
 * @src:place string copied from
 *
 * Return:place string copied to
*/

char *_srcpy(char *des, char *src)
{
	int x = 0;

	while (src[x])
	{
		des[x] = src[x];
		x++;
	}
	des[x] = '\0';

	return (des);
}

/**
 * new_dog - creat a new dog
 *
 * @name:dogs name
 * @age:dogs age
 * @owner:dogs owner
 *
 * Return:structure pointer
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d = (dog_t) malloc(sizeof(dog_t));

	if (!name || age < 0 || !owner)
		return (NULL);

	if (d == NULL)
		return (NULL);

	d->name = malloc(sizeof(char) * (_strleng(name) + 1));

	if ((*d).name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(char) * (_strleng(owner) + 1));

	if ((*d).owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->name = _srcpy(d->name, name);
	d->age = age;
	d->owner = _srcpy(d->owner, owner);

	return (d);
}
