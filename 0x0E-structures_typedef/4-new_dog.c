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
	dog_t *alfa;

	if (name == NULL || owner == NULL || name[0] == '\0' || owner[0] == '\0')
	{
		return (NULL);
	}

	alfa = (dog_t *)malloc(sizeof(dog_t));

	if (alfa == NULL)
	{
		return (NULL);
	}

	alfa->name = (char *)malloc(strlen(name) + 1);
	alfa->owner = (char *)malloc(strlen(owner) + 1);

	if (alfa->name == NULL || alfa->owner == NULL)
	{
		free(alfa->name);
		free(alfa->owner);
		free(alfa);
		return (NULL);
	}

	strcpy(alfa->name, name);
	strcpy(alfa->owner, owner);
	alfa->age = age;

	return (alfa);
}
/**
 * rv_t - a function
 * @p: input
 */
void rv_t(dog_t *p)
{
	if (p != NULL)
	{
		free(p->name);
		free(p->owner);
		free(p);
	}
}
