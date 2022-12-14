#include <stdio.h>
/**
 * print_to_98 -
 * @n:
 */
void print_to_98(int n)
{
	int i = n;

	if (n >= 98)
	{
		while (i >= 98)
		{
			if (i / 10)
				continue;
			putchar(i % 10 + '0');
			i--;
		}
		putchar('\n');
	}
	else if (i <= 98)
	{
		while (i <= 98)
		{
		if (i / 10)
			continue;
		putchar(i % 10 + '0');
		i++;
		}
		putchar('\n');
	}
}
