#include <stdio.h>
/**
 * print_to_98 -
 * @n:
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			if (n / 10)
				continue;
			putchar(n % 10 + '0');
			n--;
		}
		putchar('\n');
	}
	else if (n <= 98)
	{
		while (n <= 98)
		{
		if (n / 10)
			continue;
		putchar(n % 10 + '0');
		n++;
		}
		putchar('\n');
	}
}
