#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees dog struct
 * @d: the dog allocated memory block to be freed
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

