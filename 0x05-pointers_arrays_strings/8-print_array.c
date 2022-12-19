#include <stdio.h>
/**
 * print_array - print array elts
 * @a: input 1
 * @n: input 2
 */
void print_array(int *a, int n)
{
	int i = 0, j;
	int *s;

	s = a;
	for ( j = 0; j < n; j++)
	{
		while (s[j] != '\0')
		{
			if ( s[j][i] / 10)
				continue;
			putchar(s[j][i] % 10 + '0');
			i++;
		}
		j++;
		if (j < n)
		{
			putchar(' ');
			putchar(',');
		}
	}
	putchar('\n');
}
