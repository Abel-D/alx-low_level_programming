#include <stdio.h>
/**
 * main - list digits 0-9
 *
 * Return: 0 if success
 */
int main(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
	{
	if (x / 10)
		continue;
	putchar(x % 10 + '0');
	}
	putchar('\n');
	return (0);
}
