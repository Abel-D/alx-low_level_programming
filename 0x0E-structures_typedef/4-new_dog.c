#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner to the dog
 *
 * Return: new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog_t *newdog;
	char *namecopy = name, *ownercopy = owner;

	newdog = malloc(sizeof(struct dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = namecopy;
	newdog->age = age;
	newdog->owner = ownercopy;

	return (newdog);
}
