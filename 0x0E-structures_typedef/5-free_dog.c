#include "dog.h"

/**
* free_dog - free memory dog struct
* @d: struct dog
*
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
	d = NULL;
}
