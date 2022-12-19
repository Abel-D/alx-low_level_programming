#include <stdio.h>
/**
 * swap_int - swaps integers
 * @a: input no 1
 * @b: input no 2
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
