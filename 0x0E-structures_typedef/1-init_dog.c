#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: Datatype 1 to initialize
 * @age: Datatype 2 to initialize
 * @owner: Datatype 3 to initialize
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
