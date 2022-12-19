#include <stdio.h>

/**
 * puts2 - print every char of string
 * @str: input str
 */
void puts2(char *str)
{
	char *p;
	int i = 0;

	p = str;
	while (p[i] != '\0')
	{
		putchar(p[i] + '\0');
		i = i + 2;
	}
	putchar('\n');
}
