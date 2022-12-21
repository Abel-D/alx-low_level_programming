#include <stdio.h>
#include <string.h>
/**
 * rev_string - print str in reverse
 * @s: input string
 */
void rev_string(char *s)
{
	int i, len;
	char *start, *end, z ;

	start = s;
	len = strlen(s);
	end = s + len - 1;
	while (i < (len - 1))
	{
		z = *end;
		*end = *start;
		*start = z;
		start++;
		end--;
		i++;
	}
	putchar('\n');
}

