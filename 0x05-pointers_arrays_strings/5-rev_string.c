#include <stdio.h>

/**
 * print_rev - print str in reverse
 * @s: input string
 */
void print_rev(char *s)
{
	char *z;
	int i = sizeof(s);

	z = s;
	while (i >= 0)
	{
		putchar(z[i]);
		i--;
	}
	putchar('\n');
}

