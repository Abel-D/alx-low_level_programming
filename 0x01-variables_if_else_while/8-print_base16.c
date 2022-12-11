#include <stdio.h>
/**
 * main - list mos
 *
 * Return: 0 if success
 */
int main(void)
{
	char c = 'a';
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x / 10)
			continue;
		putchar(x % 10 + '0');

		if (x == 9)
		{
			while (c <= 'f')
			{
			putchar(c);
			++c;
			}
		}
	}
	putchar('\n');
	return (0);
}
