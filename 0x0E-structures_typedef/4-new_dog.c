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

	newdog = malloc(sizeof(struct dog_t));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;
	return (newdog);
}
