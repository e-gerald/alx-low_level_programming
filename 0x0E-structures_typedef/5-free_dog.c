#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Free dog
 * @d: Struct argument
 * Return: Freed heap
 */

void free_dog(dog_t *d)
{
	if (d)
	free(dog_t->name);
	free(dog_t->owner);
	free(d);
}
