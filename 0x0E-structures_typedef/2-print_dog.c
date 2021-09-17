#include <stdio.h>
#include "dog.h"

#define NILL "(nil)"

/**
 * print_dog - prints a struct dog
 * @d: the dog structure
 *
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = NILL;
	if (d->owner == NULL)
		d->owner = NILL;
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}

