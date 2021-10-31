#include "dog.h"

/**
* _strlen - determine se sizeof ol string
* @s: string
* Return: the size of str
*/

unsigned int _strlen(char *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


/**
* new_dog - creat a dog
* @name: name dog
* @age: age of dog
* @owner: age of dog
* Return: new dog
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *d;

	d = (dog_t *)malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = (char *)malloc(sizeof(char) * _strlen(name) + 1);
	if (d->name == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		d->name[i] = name[i];
	d->name[i] = '\0';
	d->age = age;
	d->owner = (char *)malloc(sizeof(char) * _strlen(owner) + 1);
	if (d->owner == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
		d->owner[i] = owner[i];
	d->owner[i] = '\0';

	return (d);
}
