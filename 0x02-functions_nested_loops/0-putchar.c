#include <stdio.h>
/**
 * main - print _putchar
 */
int main()
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
