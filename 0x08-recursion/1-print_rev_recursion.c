#include "main.h"
/**
 * _print_rev_recursion - reverse print string
 * @s: string input
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	for (; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
