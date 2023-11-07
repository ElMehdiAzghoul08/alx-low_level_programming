#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - a function that creates new dog
 * @name: input
 * @age: input
 * @owner: input
 *
 * Return: 0
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	if (name == NULL || owner == NULL || name[0] == '\0' || owner[0] == '\0')
	{
		return (NULL);
	}

	dog_t *newDog = (dog_t *)malloc(sizeof(dog_t));

	if (newDog == NULL)
	{
		return (NULL);
	}

	newDog->name = (char *)malloc(strlen(name) + 1);
	newDog->owner = (char *)malloc(strlen(owner) + 1);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}

	strcpy(newDog->name, name);
	strcpy(newDog->owner, owner);
	newDog->age = age;

	return (newDog);
}
/**
 * rv_t - a function
 * @p: input
 */
void rv_t(dog_t *p)
{
	if (dog != NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
	}
}
