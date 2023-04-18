#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct datatype
 * @name: Datatype 1
 * @age: Datatype 2
 * @owner: Datatype 3
 * Description: Read the code
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * my_dog - Typedef for datatype struct dog
 */

typedef struct dog my_dog;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
