#include <stdio.h>
/**
 * main - prints alphabet in upper and lower cases
 *
 * Return: o if success
 */
int main(void)
{
	char l, u = 'A';

	while (u <= 'Z')
	{
		if (u == 'A')
		{
			for (l = 'a'; l <= 'z'; ++l)
			{
				putchar(l);
			}
		}
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
