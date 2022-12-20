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
	printf("%d", len);
	i = half;
	if (len != 1)
	{
		while (p[i] != '\0')
		{
			putchar(p[i] + '\0');
			i++;
		}
	}
	putchar('\n');
}
