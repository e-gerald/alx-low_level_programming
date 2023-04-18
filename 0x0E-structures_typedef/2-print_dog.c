#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Prints a struct dog
 * @d: Struct tokens
 */

void print_dog(struct dog *d)
{
	char *s;

	if (d == NULL)
		return;
	s = malloc(sizeof(struct dog));
	s = d->name == NULL ? "(nil)" : d->name;
	printf("Name: %s\n", s);
	printf("Age: %f\n", d->age);
	s = d->owner == NULL ? "(nil)" : d->owner;
	printf("Owner: %s\n", s);
	free(s);
}
