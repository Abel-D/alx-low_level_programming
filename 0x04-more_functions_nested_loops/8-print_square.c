#include <stdio.h>

/**
 * print_square - print square wuith #
 *@size: the input size
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		j = 1;
		while (j < size)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
	}
	putchar('\n');
}
