#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct
 *
 * @name:dogs name
 * @age:dogs age
 * @owner:name of the dogs owner
 *
 * Description:dogs struct in world
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
