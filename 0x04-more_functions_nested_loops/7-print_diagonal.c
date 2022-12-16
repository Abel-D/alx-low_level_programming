#include <stdio.h>
/**
 * print_diagonal - print diagonal
 * @n: input size
 * Description: print diagonal by given size
 */
void print_diagonal(int n)
{
	int j, i = 1;

	while (i <= n)
	{
		for (j = 0; j <= i - 1; j++)
		{
			putchar(' ');
		}
		putchar('\\');
		putchar('\n');
		i++;
	}
	putchar('\n');
}
