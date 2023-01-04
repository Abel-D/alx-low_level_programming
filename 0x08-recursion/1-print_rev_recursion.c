#include "main.h"
/**
 * _print_rev_recursion - reverse print string
 * @s: string input
 */
void _print_rev_recursion(char *s)
{
	int i;
	int length = strlen(s);

	for (i = length; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}
