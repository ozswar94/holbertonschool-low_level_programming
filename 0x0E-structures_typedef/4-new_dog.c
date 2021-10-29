#include "dog.h"

/**
* new_dog - creat a dog
* @name: name dog
* @age: age of dog
* @owner: age of dog
* Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}
