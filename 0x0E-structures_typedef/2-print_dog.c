#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print dog info
 * @d: dog
 */
void print_dog(struct dog *d)
{
	struct dog *p;

	p = &*d;
	if (d == NULL)
		return;
	if (p->name == 0)
	{
		printf("Name %s\n", "(nil)");
	}
	else
	{
		printf("Name: %s\n", p->name);
	}
/*	if (p->age == NULL)
	{
		printf("Age %s\n", "(nil)");
	}
	else
	{
*/
		printf("Age: %f\n", p->age);

	if (p->owner == NULL)
	{
		printf("Owner %s\n", "(nil)");
	}
	else
	{
		printf("Owner: %s\n", p->owner);
	}
}
