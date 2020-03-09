#include "dog.h"
#include <stdio.h>

/**
 * print_dog - print name, age and owner's dog
 * @d: pointer
 */

void print_dog(struct dog *d)
{
	if (d == '\0')
		goto fin;

	if (d->name == '\0')
		d->name = "(nil)";

	if (d->owner == '\0')
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

fin:;
}
