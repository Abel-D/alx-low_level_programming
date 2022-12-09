#include <stdio.h>
/**
 * main - prints alphabet in upper and lower cases
 *
 * Return: o if success
 */
int main(void)
{
	char c, u;

	do {
		putchar(c);
		++c;
	} while (c <= 'z');
	if (c == 'Z')
	{
		for (u = 'A'; u <= 'Z'; ++u)
		{
			putchar(u);
		}
	}
	putchar('\n');
	return (0);
}
