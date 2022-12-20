#include <stdio.h>
/**
 * print_array - print array elts
 * @a: input 1
 * @n: input 2
 */
void print_array(int *a, int n)
{
	int j = 0;

	while (j < n)
	{
		printf("%d", *(a + j));
		j++;
		if (j < n)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}
