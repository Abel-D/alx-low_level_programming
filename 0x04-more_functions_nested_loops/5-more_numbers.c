#include <stdio.h>
#include <ctype.h>
/**
 * more_numbers - print nos
 */
void more_numbers(void)
{
	int i, j = 0;

	for (i = 0; i < 10; i++)
	{
		while (j < 10)
		{
			if (i / 10)
				continue;
			putchar(i + '0');
			i++;
		}
		j = 0;
		putchar('\n');
	}
	putchar('\n');
}
