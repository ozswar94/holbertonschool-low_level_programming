#include "dog.h"

/**
* init_dog - init struct dog
* @d: struct dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dogg
*
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
