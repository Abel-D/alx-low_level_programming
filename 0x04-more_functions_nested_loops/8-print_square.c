#include <stdio.h>

/**
 * print_square - print square wuith #
 *@size: the input size
 */
void print_square(int size)
{
	int i, j = 0;

	for (i = 0; i < size; i++)
	{
		j = 0;
		while (j < size)
		{
			putchar('#');
			j++;
		}
		putchar('\n');
	}
	putchar('\n');
}
