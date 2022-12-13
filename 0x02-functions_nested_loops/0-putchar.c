#include <stdio.h>
/**
 * main - print _putchar
 *
 * Return: 0 if success
 */
int print_putchar(void)
{
	char c[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar (c[i]);
	}
	putchar('\n');
	return (0);
}
