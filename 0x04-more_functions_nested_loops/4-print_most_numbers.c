#include <stdio.h>
/**
 * print_most_numbers - print nos without 2 n 3
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if ((i != 2) && (i != 4))
		{
			if (i / 10)
				continue;
			putchar(i + '0');
		}
		i++;
	}
	putchar('\n');
}
