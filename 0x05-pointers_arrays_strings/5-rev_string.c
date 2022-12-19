#include <stdio.h>

/**
 * print_rev - print str in reverse
 * s: input string
 */
void print_rev(char *s)
{
	int z = sizeof(s);
	int i = z - 1;

	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}

