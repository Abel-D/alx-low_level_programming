#include "main.h"
/**
 * _print_rev_recursion - reverse print string
 * @s: string input
 */
void _print_rev_recursion(char *s)
{
	int length = strlen(s);

	while (length >= 0)
	{
		putchar(*s);
		length--;
		s--;
	}
	putchar('\n');
}
