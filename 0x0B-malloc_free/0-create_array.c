#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create array and fill with constant byte
 * @size: size of array
 * @c: const char val
 *
 * Return: char ptr
 */
char *create_array(unsigned int size, char c)
{
	char *p = (char *)malloc(size * sizeof(char));
	unsigned int i = 0;

	while (i < size)
	{
		*p = c;
		p++;
		i++;
	}
	return (p);
}
