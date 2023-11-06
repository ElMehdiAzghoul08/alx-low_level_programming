#include "dog.h"

/**
 * init_dog - is a function that initialize a variable of type struct dog
 * @d: input
 * @name: input
 * @age: input
 * @owner: input
 *
 * Return: 0
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
