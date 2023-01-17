#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free allocated memory
 * @d: dog instance
 */
void free_dog(dog_t *d)
{
	struct dog_t *dog = malloc(sizeof(dog_t));

	dog->name = d->name;
	dog->age = d->age;
	dog->owner = d->owner;
	free(dog);
}
