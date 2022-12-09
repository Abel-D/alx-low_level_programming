#include <stdio.h>
/**
 * main - write alpha excluding q and e
 *
 * Return: 0 for success
 */
int main(void)
{

	for (char c = 'a'; c <= 'z'; ++c)
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
	return (0);
}

