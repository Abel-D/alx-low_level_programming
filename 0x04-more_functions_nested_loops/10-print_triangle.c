#include <stdio.h>

/**
 * print_triangle - check for uppercase
 * @size: input val
 *
 * Description: return o or 1 dep
 * Return: integer 1 if success, else 0
 */
void print_triangle(int size)
{
	int j = 1;

	while (size > 0)
	{
		while (j <= size - 1)
		{
			putchar(' ');
			j++;
		}
		putchar('#');
		size--;
	}
}

