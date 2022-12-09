#include <stdio.h>
/**
 * main - write alpha excluding q and e
 *
 * Return: 0 for success
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; ++c)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}
		else
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}

