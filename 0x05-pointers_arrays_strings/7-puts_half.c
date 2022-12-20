#include <stdio.h>
/**
 * puts_half - print half of a string
 * @str: input string
 */
void puts_half(char *str)
{
	int half, i;
	char *p;
	int len = sizeof(str);

	p = str;
	if (len % 2 != 0)
		half = (len - 1) / 2;
	else
		half = len / 2;
	if (len != 1)
	{
		for (i = half + 1; p[i] != '\0'; i++)
		{
			putchar(p[i] + '\0');
		}
	}
	putchar('\n');
}
