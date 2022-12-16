#include <stdio.h>
/**
 * print_numbers -
 */
void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		if (i / 10)
			continue;
		putchar(i + '0');
		i++;
	}
	putchar('\n');
}
