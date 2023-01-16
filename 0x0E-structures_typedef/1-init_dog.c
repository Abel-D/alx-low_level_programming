#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialize dog
 * @d: the dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner to the dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p;

	p = &*d;
	if (d == NULL)
		return;
	p->name = name;
	p->age = age;
	p->owner = owner;
}
