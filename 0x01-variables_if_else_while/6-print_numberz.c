#include <stdio.h>
/**
 * main - list mos
 *
 * Return: 0 if success
 */
int main(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x == 9)
		{
			putchar('\n');
		}
		putchar(x);
		x++;
	}
	return (0);
}
