#include <stdio.h>
/**
 * more_numbers - print nos
 */
void more_numbers(void)
{
	int i, j = 0;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j / 10)
				continue;
			putchar(j + '0');
		}
		j = 0;
		putchar('\n');
	}
	putchar('\n');
}
