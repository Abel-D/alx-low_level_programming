#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - iterate array
 * @array: array
 * @size: size of array
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	void (*a)(int) = &*action;

	while (i < size)
	{
		(*a)(array[i]);
		i++;
	}
}
