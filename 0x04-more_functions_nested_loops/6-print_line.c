#include <stdio.h>
/**
 * print_line - function to print line
 * @n: input size
 *
 * Description: print line
 * Return:
 */
void print_line(int n)
{
	int i;

	while (i < n)
	{
		putchar('_');
		i++;
	}
	putchar('\n');
}

