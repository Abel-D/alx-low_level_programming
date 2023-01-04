#include "main.h"
/**
 * _puts_recursion - recursively prints string
 * @s: input string
 */
void _puts_recursion(char *s)
{
		if (*s == '\0')
			return;
		putchar(*s);
		s++;
		_puts_recursion(s);
		putchar('\n');
}

