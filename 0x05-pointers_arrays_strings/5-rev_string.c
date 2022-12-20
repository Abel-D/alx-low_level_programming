#include <stdio.h>
#include <string.h>
/**
 * rev_string - print str in reverse
 * @s: input string
 */
void rev_string(char *s)
{
	int i, len;

	z = s;
	len = strlen(s);
	i = len;
	while (i >= 0)
	{
		putchar(s[i]);
		i--;
	}
	putchar('\n');
}

