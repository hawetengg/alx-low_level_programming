#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - A function that initializes
 * a variable of type struct dog
 * @d: Structure pointer
 * @name: name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
