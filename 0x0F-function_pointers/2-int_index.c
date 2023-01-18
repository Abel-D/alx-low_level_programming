#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - find integer
 * @cmp: ptr to fun
 * @array: array
 * @size: size of array
 *
 * Return: 1 if found, -1 if not
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int res, i = 0;

	while (i < size)
	{
		if (size <= 0)
		{
			res = -1;
			break;
		}
		else
		{
			if ((*cmp)(array[i]))
			{
				res = i;
				break;
			}
		}
		i++;
	}
	return (res);
}
