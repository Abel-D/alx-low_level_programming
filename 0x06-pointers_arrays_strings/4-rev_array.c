#include <stdio.h>

/**
 * reverse_array - print aray in reverse
 * @a: input array
 * @n: no of elts
 */
void reverse_array(int *a, int n)
{
	int i = n - 1;

	while (i >= 0)
	{
		printf("%d", *(a + i));
		i--;
		if (i >= 0)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
}

